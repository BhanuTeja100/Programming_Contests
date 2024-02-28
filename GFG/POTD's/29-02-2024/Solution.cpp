class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    
	    
	    // variable to store the result
	    long long res = 0;
	    
	    // loop through the 32 bit integer
	    for(int i=0; i<32; i++){
	        
	        // variable to store the zero count and ones count at a particular base for a 32 bit integer
	        long long zCnt = 0;
	        long long oCnt = 0;
	        
	        // looping through all the elements of the array each time
	        for(int j=0; j<n; j++){
	            if(arr[j] % 2) oCnt++;
	            else zCnt++;
	            arr[j] /= 2;
	        }
	        
	        // adding all the pairs of the different bit values 
	        res += zCnt * oCnt * 2;
	    }
	    
	    // returning the result
	    return res;
	}
};