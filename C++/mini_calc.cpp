#include<iostream>
using namespace std;
int main()
{int a,b;
int op;
cout<<"Enter number 1: "<<endl;
cin>>a;
cout<<"Enter number 2: "<<endl;
cin>>b;
cout<<"Choose an operation:"<<endl;
cout<<"1.+\n2.-\n3.*\n4./"<<endl;
cin>>op;
switch(op){
    case 1:
    cout<<"a+b= "<<a+b;
    break;

    case 2:
    cout<<"a-b= "<<a-b;
    break;

    case 3:
    cout<<"a*b= "<<a*b;
    break;

    case 4:
    cout<<"a/b= "<<a/b;
    break;
}

    return 0;
}