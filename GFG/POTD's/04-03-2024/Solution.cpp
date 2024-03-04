class Solution{
  public:
    void swapElements(int arr[], int n){
        
        //Using for loop
        for(int i=0; i<n-2; i++){
            swap(arr[i], arr[i+2]);
        }
        
    }
};