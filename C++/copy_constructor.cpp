#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 100;
    }
    Number(int num)
    {
        a = num;
    }
    // Number(Number &obj)
    // {
    //     a = obj.a;
    // }
    void display()
    {
        cout << "number is " << a << endl;
    }
};
int main()
{
    Number x, y, z(45),n;
    x.display();
    y.display();
    z.display();
    Number z1(x);
    Number z2(z);
    z1.display();
    z2.display();
    n=z1;
    n.display();
    return 0;
}