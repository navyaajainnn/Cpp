class Solution{
    public:
    int reverse(int x){
        int ans=0;
        while(x!=0){
            int digit=x%10;
            if(ans>(__INT_MAX__/10) || ans<(INT_MIN/10)){
                return 0;
            }
            ans=(ans*10)+digit;
            x=x/10;

        }
        return ans;
    }
};