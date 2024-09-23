#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "how are you?";
    }
};
class base2
{
public:
    void greet()
    {
        cout << "good morning";
    }
};
class Derived : public base1, public base2
{
    int a;
    public:
    void greet(){
        base1::greet();
    }
};
class B{
    public:
    void say(){
        cout<<"hello";
    }
};
class D:public B{
    int a;
    // public:
    // void say(){
    //     cout<<"hello my love";
};
int main(){
// {base1 base1obj;
// base2 base2obj;
// base1obj.greet();
// base2obj.greet();
// Derived d;
// d.greet();
B b;
b.say();
D d;
d.say();
    return 0;
}