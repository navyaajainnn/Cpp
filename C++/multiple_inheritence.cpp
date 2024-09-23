#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1;

public:
    void set_base1(int a)
    {
        base1 = a;
    }
};
class Base2
{
protected:
    int base2;

public:
    void set_base2(int a)
    {
        base2 = a;
    }
};
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "the value of base 1 is: " << base1 << " and base2 is: " << base2 << endl;
        cout << "sum is: " << base1 + base2;
    };
};
int main()
{
Derived harry;
harry.set_base1(2);
harry.set_base2(4);
harry.show();

    return 0;
}