#include<iostream>
#include<array>
using namespace std;

void reverse(int arr[], int size){
int start=0;
int end=size-1;
while(start<=end){
swap(arr[start], arr[end]);
start++;
end--;
}
}

void print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main()
{int array1[6]={12,57,9,3,8,80};
int array2[5]={489,83,25,93,54};
reverse(array1,6);
reverse(array2,5);
print(array1,6);
print(array2,5);

  return 0;
}