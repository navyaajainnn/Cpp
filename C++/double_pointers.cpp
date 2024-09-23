#include<iostream>
using namespace std;
int main()
{int i=5;
int *p=&i;
int **p2=&p;
cout<<"Adress of i= "<<&i<<endl;;
cout<<"Adress of i= "<<p<<endl;;
cout<<"Adress of p= "<<p2<<endl;;
cout<<"Adress of p= "<<&p<<endl;;
cout<<"Value at p2= "<<*p2<<endl;;
cout<<*p<<endl;
cout<<i<<endl;
cout<<*p<<endl;
cout<<**p2<<endl;
cout<<&i<<endl;
cout<<p<<endl;
cout<<*p2<<endl;
cout<<&p<<endl;
cout<<p2<<endl;
    return 0;
}