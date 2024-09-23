#include <iostream>
#include<cmath>
using namespace std;
class SimpleCalculator
{
    int a, b;

public:
    void get_number()
    {
        cout << "Enter the values of a and b:" << endl;
        cin >> a >> b;
    }
    void SimpleResults()
    {
        cout << "a+b is: " << a + b << endl;
        cout << "a-b is: " << a - b << endl;
        cout << "a*b is: " << a * b << endl;
        cout << "a/b is: " << a / b << endl;
    }
};

class ScientificCalculator{
int a,b;
public:
 void get_numberS()
    {
        cout << "Enter the values of a and b:" << endl;
        cin >> a >> b;
    }
    void ScResults()
    {
        cout << "sin(a): " << sin(a) << endl;
        cout << "cos(b): " << cos(b) << endl;
        cout << "tan(a): " << tan(a)<< endl;
        cout << "exp(a): " << exp(a)<< endl;
    }
};

class Derived : public SimpleCalculator,public ScientificCalculator
{
public:
    void Result()
    {
        void get_number();
        void SimpleResults();
        void get_numberS();
        void ScResults();
    }
};

int main()
{
    Derived Navya;
    Navya.get_number();
    return 0;
}