/*#include<iostream>
using namespace std;
int main()
{char ch;
cin>>ch;
if(ch>=97 || ch<=122){
    cout<<"lower case"<<endl;
    }
else if(ch>=65|| ch<=90){
    cout<<"upper case"<<endl;
}
else if(ch>=0 || ch<=9){
    cout<<"Numeric value"<<endl;
}
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 1;
    int sum = 0;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << sum;
    return 0;
}*/


//SUM OF ALL EVEN NUMBERS FROM 1 TO N:
// #include<iostream>
// using namespace std;
// int main()
// {int n;
// cout<<"Enter the value of n: ";
// cin>>n;
// int i;
// int sum=0;
// for(i=1;i<=n;i++){
//     if(i%2==0){
//         sum=sum+i;
//     }
// }
// cout<<sum;
//     return 0;
// }

//F TO C IN TEMP:
#include<iostream>
using namespace std;
int main()
{float f,c;
cout<<"Enter the temp in F: ";
cin>>f;
c=(f-32)*5/9;
cout<<c;
    return 0;
}