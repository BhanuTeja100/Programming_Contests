class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        vector<int> prefixMin(n, 0);
        vector<int> suffixMax(n, 0);
        
        int maxi = a[n-1], mini = a[0];
        
        for(int i=n-1; i>=0; i--){
            maxi = max(maxi, a[i]);
            suffixMax[i] = maxi;
        }
        for(int i=0; i<n; i++){
            mini = min(mini, a[i]);
            prefixMin[i] = mini;
        }
        
        int i=0, j=0;
        
        int max_diff = -1;
        
        while(i < n && j <n){
            if(prefixMin[i] <= suffixMax[j]){
                max_diff = max(max_diff, j-i);
                j++;
            }
            else{
                i++;
            }
        }
        
        return max_diff;
    }
};