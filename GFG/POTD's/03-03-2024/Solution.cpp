class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	
	// compare function to  sort the array of strings to have the largest first then second
	bool static compare(string &s1, string &s2){
	    string t1 = s1+s2;
	    string t2 = s2+s1;
	     // returning the maximum string
	    return t1>t2;
	}
	string printLargest(int n, vector<string> &arr) {
	    
	    // sort the array values according to compare function
	    sort(arr.begin(), arr.end(), compare);
	    
	    // res string to store the answer
	    string res =  "";
	    
	    // storing the sorted res
	    for(int i=0; i<n; i++){
	        res += arr[i];
	    }
	    
	    
	    // returning res
	    return res;
	}
};