//isSorted function:
/*#include<iostream>
using namespace std;
bool isSorted(int arr[], int size){
    //base case:
    if(size==1 || size==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=isSorted(arr+1,size-1);
        return ans;
    }
}
int main()
{int arr[5]={2,4,5,7,8};
isSorted(arr,5);
if(isSorted){
    cout<<"Array is sorted";
}
else{
    cout<<"No";
}
    return 0;
}*/


//Return sum:
/*#include<iostream>
using namespace std;
int getSum(int arr[], int size){
    //base case
    if(size==0){
        return 0;
    }
    if (size==1)
    {
        return arr[size-1];
    }
        
        int final=getSum(arr+1,size-1);
        int ans=arr[0]+final;
        return ans;
}

int main()
{int arr[6]={1,2,3,4,5,6};
cout<<"sum is "<<getSum(arr,6);
;
    return 0;
}*/


//Linear Search:
/*#include<iostream>
using namespace std;
bool LinearSearch(int arr[], int size, int key){
    //base:
    if(size==0){
        return 0;
    }
    if(arr[0]==key){
        return 1;
    }
    else{
        bool ans=LinearSearch(arr+1,size-1,key);
        return ans;
    }
}

int main()
{int arr[]={2,3,4,5,6,7,8};
int size=7;
int key=1;
cout<<LinearSearch(arr,size,key);
    return 0;
}*/

//binary search:
#include<iostream>
using namespace std;
bool binarySearch(int arr[], int key, int start, int end){
   
    //base
    if(start>end){
        return 0;
    }
    int mid=start+(end-start)/2;

    if(arr[mid]==key){
        return 1;
    }
   if(arr[mid]<key){
    return binarySearch(arr,key,mid+1,end);
   }
   else{
    return binarySearch(arr,key,start,mid-1);

   }
}
int main()
{int arr[]={2,3,4,5,6,7,8};
int key=3;
int size=7;
cout<<binarySearch(arr,3,0,6);
    return 0;
}