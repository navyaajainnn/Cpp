#include<iostream>
using namespace std;
class Y; 
class X{
    int data;
    friend void add(X, Y);
    public:
    void setvalue(int value){
        data= value;
    }
};

class Y{
    int num;
    friend void add(X, Y);

    public:
    void setvalue(int value){
        num= value;
    }
};
void add(X o1, Y o2){
    cout<<"summing "<< o1.data+ o2.num;
}
int main()
{X a1;
a1.setvalue(3);
Y b1;
b1.setvalue(5);

add(a1, b1);
    return 0;
}