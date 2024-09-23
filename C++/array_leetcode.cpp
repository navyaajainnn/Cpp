//SWAP ALTERNATE 
//#include<iostream>
//using namespace std;
//void printArray(int arr[], int n){
//for(int i=0;i<n;i++){
//    cout<<arr[i]<<" ";
//}
//}
//
//
//void alternate(int arr[], int n){
//    for(int i=0;i<n;i=i+2){
//        if(i+1<n){
//            int temp;
//            temp=arr[i];
//            arr[i]=arr[i+1];
//            arr[i+1]=temp;
//        }
//    }
//}
//
//int main()
//{int one[4]={30,72,24,64};
//int two[5]={15,26,673,24,54};
//alternate(one,4);
//alternate(two,5);
//printArray(one,4);
//cout<<endl;
//printArray(two,5);
//    return 0;
//}
//              ------------------------------------------

//UNIQUE ELEMENT
//#include<iostream>
//using namespace std;
//int find(int arr[], int size){
//    int answer=0;
//for(int i=0;i<size;i++){
//answer=answer^arr[i];
//}
//return answer;
//}
//
//int main()
//{int unique[7]={1,3,4,5,4,3,1};
//cout<<find(unique,7);
//    return 0;
//}

//#include<iostream>
//using namespace std;
//bool uniqueOccurrences(int arr[]) {
//        int i = 0;
//        sort(arr.begin(),arr.end());
//        while (i < arr.size()){
//            int count = 1;
//            for (int j = i+1; j< arr.size(); j++){
//                if (arr[i] == arr[j])
//                    count++;
//            }
//            ans.push_back(count);
//            i = i + count;
//        }
//        sort(ans.begin(),ans.end());
//        for (int i = 0; i < ans.size() - 1; i++){
//            if (ans[i] == ans [i+1])
//                return false;
//        }
//        return true;
// }
//
// int main(){
//int array[]={4,5,4,7,7,7,2,2,4,4};
//uniqueOccurrences(array);
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> ans (vector<int>&array, int s ){
 vector<int>temp;

for(int i=0;i<array.size();i++){
    for (int j=i+1;j<array.size();j++){
        for(int k=j+1;k<array.size();k++){
            if(array[i]+array[j]+array[k]==s){
                temp.push_back(array[i]);
                temp.push_back(array[j]);
                temp.push_back(array[k]);
                ans.push_back(temp);
            }
        }
    }
}
return ans;

}
}
