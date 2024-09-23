#include<iostream>
using namespace std;
int main()
{int marks[4]= {23,96,67,34};
// for(int i=0;i<4;i++){
//     cout<<"\n"<<marks[i];
// }
//int i=0;
// while(i<4){
//     cout<<"\n"<<marks[i];
//     i++;
// }
// do{
//     cout<<"\n"<<marks[i];
//     i++;
// }while(i<4);
//     return 0;
//POINTERS AND ARRAYS
int *p= marks;
cout<<"the value at marks 0"  <<p<<"\n";
cout<<"the value at marks 1"  <<(p+1)<<"\n";;
cout<<"the value at marks 2"  <<(p+2)<<"\n";;
cout<<"the value at marks 3"  <<(p+3)<<"\n";;
}