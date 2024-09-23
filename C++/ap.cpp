//#include<iostream>
//using namespace std;
//int AP(int a){
//    int answer;
//    answer= (3*a+7);
//    return answer;
//}
//int main()
//{int n;
//cout<<"ENTER NUMBER: ";
//cin>>n;
//cout<<AP(n);
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
// 
//// recursive function to count set bits
//int countSetBits(int n)
//{
//    // base case
//    if (n == 0)
//        return 0;
//    else
//        // if last bit set add 1 else add 0
//        return (n & 1) + countSetBits(n >> 1);
//}
// 
//// driver code
//int main()
//{
//    int n = 9;
//    // function calling
//    cout << countSetBits(n);
//    return 0;
//}


#include<iostream>
using namespace std;
int fibonacci(int n){
    int a=0;
    int b=1;
    for(int i=0;i<=n;i++){
        int next=a+b;
        cout<<b<<endl;
         a=b;
        b=next;
    }
    
}
int main()
{int n;
cin>>n;
cout<<fibonacci(n);
    return 0;
}