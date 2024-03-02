class Solution{
    public:
    int firstElementKTime(int n, int k, int a[])
    {
        // unordered map to store the frequency of elements
         unordered_map<int, int> ump;
        
        // looping over all the elements of the array
        for(int i=0; i<n; i++){
            ump[a[i]]++;
            
            // if the frequency of the current element is equal to k returning the element
            if(ump[a[i]] == k) return a[i];
        }
        
        return -1;
    }
};

// Level: easy
// TC: O(n)
// SC: O(n)