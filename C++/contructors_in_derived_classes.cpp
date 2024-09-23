#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    base(int i)
    {
        data1 = i;
        cout << "Base class 1 constructor called " << endl;
    }
    void printDatabase(void)
    {
        cout << "The value of data is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base class 2 constructor called " << endl;
    }
    void printDatabase2(void)
    {
        cout << "The value of data is " << data2 << endl;
    }
};
class Derived :public base2, public base
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : base2(b),base(a)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called " << endl;
    }
    void printDatad(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};
int main()
{Derived navya(1,2,3,4);
navya.printDatad();
    return 0;
}