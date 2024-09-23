#include<iostream>
using namespace std;
int main()
{int money;
int Rs100,Rs50,Rs20,Rs1;
cout<<"Enter the denomination: ";
cin>>money;
switch(1){
    case 1:
    Rs100=money/100;
    money=money%100;
    cout<<"Number of 100 rupees notes= "<<Rs100<<endl;
     case 2:
    Rs50=money/50;
    money=money%50;
    cout<<"Number of 50 rupees notes= "<<Rs50<<endl;
     case 3:
    Rs20=money/20;
    money=money%20;
    cout<<"Number of 20 rupees notes= "<<Rs20<<endl;
     case 4:
    Rs1=money/1;
    money=money%1;
    cout<<"Number of 1 rupees notes= "<<Rs1<<endl;

}
    return 0;
}