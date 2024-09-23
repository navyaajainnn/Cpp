#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void); // contructor decalration
    void printnum()
    {
        cout << "num is " << a << "+" << b << "i";
    }
};
complex ::complex(void) //----default constructor
{
    a = 10;
    b = 0;
}
int main()
{
    complex c;
    c.printnum();
    return 0;
}