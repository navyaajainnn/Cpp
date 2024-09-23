#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter employee id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "employee id is " << id << " and his count is " << count;
    }
     static void getcount(void)
     {
         cout << "count of employee is " << count << endl;
     }

};
int Employee ::count;


int main()
{Employee b1,b2,b3;
b1.setdata();
b1.getdata();
Employee::getcount();
b2.setdata();
b2.getdata();
Employee::getcount();
b3.setdata();
b3.getdata();
Employee::getcount();

    return 0;
}