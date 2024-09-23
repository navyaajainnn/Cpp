#include <iostream>
using namespace std;
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when constructor is called for object number " << count << endl;
    }
    ~num()
    {
        cout << "this is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};
int main()
{cout<<"we are inside our main funtion"<<endl;
cout<<"creating fist object n1"<<endl;
num n1;
{
    cout<<"entering this block"<<endl;
    cout<<"creating 2 more objs"<<endl;
    num n2,n3;
    cout<<"exiting this block"<<endl;
}
cout<<"back to main block"<<endl;
    return 0;
}