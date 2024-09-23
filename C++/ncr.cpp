#include<iostream>
using namespace std;
int fact(int n){
      int product=1;
    for(int i=1;i<=n;i++){
        product=product*i;
}
return product;
}
int ncr(int n, int r){
    int ans= fact(n)/(fact(r)*fact(n-r));
    return ans;
}

int main(){
cout<<ncr(8,6);
    return 0;
}