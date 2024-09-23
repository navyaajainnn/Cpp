#include <iostream>
using namespace std;
class Employee
{
    int id;

public:
    float salary;
    Employee(){}
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    friend class Programmer;
};
class Programmer: public Employee{
    public:
    Programmer(int inpId)
    {
        id= inpId;
    }
    int languageCode=9;
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillf(7);
    cout<<skillf.languageCode<<endl;
    skillf.getData();
    return 0;
}