#include<iostream>
#include<array>
using namespace std;
int main()
{int arr[8]={1,0,1,1,0,0,1,0};
int size=8;
int j=size-1;
int i=0;
while(i<j){
        if(arr[i]==0 && arr[j]==1){
            i++;
            j--;
        }
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==1 && arr[j]==1){
            j--;
        }
        else if(arr[i]==0 && arr[j]==0){
            i++;
        }
    }

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}