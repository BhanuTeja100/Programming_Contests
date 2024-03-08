class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        string prev = s;
        string curr = "";
        
        for(int i=0; i<r; i++){
            for(int j=0; j<n+1; j++){
                if(prev[j] == '0') curr += "01";
                if(prev[j] == '1') curr += "10";
            }
            
            prev = curr;
            curr = "";
        }
        
        return prev[n];
    }
};