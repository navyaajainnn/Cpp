/* #include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main()
{int n;
cout<<"Enter the value of n: ";
cin>>n;
cout<<factorial(n)<<endl;
    return 0;
}*/

//Code for power of 2:
/*#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    return 2*power(n-1);
}
int main()
{int n;
cout<<"Enter the value of n: ";
cin>>n;
cout<<power(n)<<endl;
    return 0;
}*/

//print counting:
/*#include<iostream>
using namespace std;
int counting(int n){
    if(n==1){
        return 1;
    }
    cout<<n<<endl;
    return counting(n-1);
}
int main()
{int n;
cout<<"Enter the value of n: ";
cin>>n;
cout<<counting(n)<<endl;
    return 0;
}*/

//fibonacci:
/*#include<iostream>
using namespace std;
int fib(int n){
if(n==1){
    return 0;
}
if(n==2){
    return 1;
}
return fib(n-1)+fib(n-2);

}
int main()
{int n=8;
cout<<fib(8);
    return 0;
}*/

#include<iostream>
using namespace std;
char digits(int n, string arr[]){
//base case
if(n==0){
    return 0;
}
//processing
int digit=n%10;
n=n/10;
//rr
digits(n,arr);
cout<<arr[digit]<<" ";
}
int main()
{string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int n;
cout<<"enter n: ";
cin>>n;
cout<<digits(n,arr);
    return 0;
}