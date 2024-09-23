#include<iostream>
using namespace std;
int main()
{int age;
cout<<"enter your age\n";
cin>>age;
// if(age<18){
//     cout<<"you cant attend my party\n";
// }
// else if(age==18){
//     cout<<"you can come for limited hours\n";
// }
// else{
//     cout<<"most welcome\n";
// }
switch (age)
{
case 18:
cout<<"hello\n";
    break;

case 22:
cout<<"hi\n";
break;

case 4:
cout<<"heyy\n";

case 1:
cout<<"nothing\n";

default:
    break;
}
    return 0;
}