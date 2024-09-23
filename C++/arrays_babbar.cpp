////SUM OF ELEMENTS OF AN ARRAY
//#include<iostream>
//using namespace std;
//int main()
//{int arr[6];
//int i;
//int sum=0;
//    cout<<"enter elements "<<endl;
//
//for(i=0;i<6;i++){
//    cin>>arr[i];
//    sum+=arr[i];
//
//}
////  int sum=0;
////     sum+=arr[i];
// cout<<"sum of the array is: "<<sum;
//
//    return 0;
//}

//MIN MAX CONCEPT 
#include<iostream>
using namespace std;
int getmax(int array[], int n){
int max= INT32_MIN;
for(int i=0;i<n;i++){
    if(array[i]>max){
        max=array[i];
    }
}
return max;
}

int getmin(int array[], int n){
int min= INT32_MAX;
for(int i=0;i<n;i++){
    if(array[i]<min){
        min=array[i];
    }
}
return min;
}


int main()
{int size;
cout<<"enter size : ";
cin>>size;
int num[size];
    cout<<"enter elements ";

for(int i=0;i<size;i++){
    cin>>num[i];
}
cout<<"maximum element is: "<<getmax(num,size)<<endl;
cout<<"minimum element is: "<<getmin(num,size)<<endl;
    return 0;
}