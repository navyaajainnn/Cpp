#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&nums1, int m, vector<int>&nums2 , int n) {
        for(int i=0; i<n; i++){
            nums1[m+i] = nums2[i];
        
        sort(nums1.begin(), nums1.end())
        };
}


void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{vector<int>arr1[6]={1,2,3,0,0,0};
vector<int>arr2[3]={2,5,6};
merge(arr1,6,arr2,3);
print(arr1, 6 );
    return 0;
}