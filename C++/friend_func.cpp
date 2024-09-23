#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
    int add(int a, int b){
        return a+b;
    }
    int sum(complex, complex);

};
class complex{
    int a,b;
    friend class calculator;
    public:
    void set(int n1, int n2){
        a=n1;
        b=n2;
    }
    void print(){
        cout<<"number is "<< a << "+" << b <<"i"<<endl;
    }
};
int calculator :: sum(complex o1, complex o2){
    return (o1.a+o2.a);
}
 
int main()
{complex o1,o2;
o1.set(1,2);
o2.set(3,4);
calculator c;
int res= c.sum(o1,o2);
cout<<"sum is "<< res<< endl;
// int res= c.sum(o1,o2);
// cout<<"sum is "<< res<< endl;
    return 0;
}