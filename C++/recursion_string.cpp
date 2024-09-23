//reverse char:
/*#include<iostream>
using namespace std;
void reverse(string& s,int i,int j){
//base
if(i>j){
    return;
}
swap(s[i],s[j]);
i++;
j--;
reverse(s,i,j);
}
int main()
{string s="abcdef";
int i=0;
int j=s.size()-1;
reverse(s,i,j);
cout<<s<<endl;
    return 0;
}*/

//Palindrome
/*#include<iostream>
using namespace std;
bool palindrome(string &s,int i,int j){
    cout<<s<<endl;
    //base
    if(i>j){
        return 0;
    }
    if(s[i]==s[j]){
        i++;
        j--;
        palindrome(s,i,j);
            return 1;
    }
    if(s[i]!=s[j]){
        return 0;
    }
}
int main()
{string s="amzei";
int i=0;
int j=s.length()-1;
bool ans=palindrome(s,i,j);
if (ans)
{
cout<<"Is a palindrome"<<endl;
}
else{
    cout<<"no";
}

    return 0;
}*/

//calculating power using recursion:
/*#include<iostream>
using namespace std;
int power(int a,int b){
    //base
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans=power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main()
{int a,b;
cout<<"enter a and b"<<endl;
cin>>a>>b;
cout<<power(a,b);
    return 0;
}*/

//bubble sort
#include<iostream>
using namespace std;
void SortedArray(int arr[], int size){
    //base
    if(size==0 || size==1){
        return;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    SortedArray(arr,size-1);
}
int main()
{int arr[5]={4,2,6,8,1};
SortedArray(arr,5);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}