class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
    //   Initializing the first and last index
       int l = 0, r = n-1;
       
    //   Checking the edge cases
       if(n == 1) return arr[0];
        if( arr[n-1] > arr[n-2]) return n-1;
        if(arr[1] < arr[0] ) return 0;
        
    // Binary Search to find the peak element
       while(l < r){
           int m = (l+r)/2;
           
          if(arr[m] < arr[m+1]){
              l = m;
          }
          else if(arr[m] < arr[m-1]){
              r = m;
          }
          else{
              return m;
          }
       }
       
       // return -1 if no element given
       return -1;
    }
};