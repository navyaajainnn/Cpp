#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
int i;
for(i=0;i<size;i++){
    if(arr[i]==key){
        return 1;
    }
}
return 0;
}

int main()
{int arr[10]={5,2,3,4,6,7,9,8,1,10};
int key;
cout<<"enter the element to be searched: "<<endl;
cin>>key;
bool found =search(arr,10,key);
if(found){
cout<<"found "<<endl;
}
else{
    cout<<"not found "<<endl;
}
    return 0;
}