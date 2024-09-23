#include<iostream>
using namespace std;
void myFunction(int myNumbers[5]) {
    cout<<"size is " <<sizeof(myNumbers)<<endl;
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}
int main()
{int arr[10]={2,4,5,6,77,8,3,2,91,4};
// cout<<"adress "<<arr<<endl;
// cout<<"Adress "<<&arr[0]<<endl;
// cout<<"value "<<arr[0]<<endl;
// cout<<"1st "<< *arr<<endl;
// cout<<"2nd "<< *arr+1<<endl;
// cout<<"3rd "<< *(arr+1)<<endl;
// cout<<"4th "<< (*arr)+1<<endl;
cout<<arr<<endl;
char ch[5]="abcd";
cout<<ch<<endl;
char *c=&ch[0];
cout<<c<<endl;
cout<<sizeof(*arr)<<endl;



  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;

}