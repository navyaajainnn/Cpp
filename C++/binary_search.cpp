#include<iostream>
using namespace std;
int search(int array[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(array[mid]==key){
            return mid;
        }
        if(array[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{int arr[7]={2,5,7,9,10,14,18};
int key=14;
cout<<"Key found at:"<<search(arr,7,14)<<" index.";
    return 0;
}