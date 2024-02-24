class Solution
{
    public:
        int f(int n){
            if(n == 0) return 0;
            
            int sum = f(n/2) + f(n/3) + f(n/4);
            
            if(sum >= n) return sum;
            else return n;
        }
        int maxSum(int n)
        {
            //code here.
           return f(n);
        }
};