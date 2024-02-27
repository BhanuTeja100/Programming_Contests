class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        if(s.length() <= 3){
            int n = stoi(s);
            
            if(n % 8 == 0){
                return 1;
            }
            else{
                return -1;
            }
        }
        
        string sub = s.substr(s.length() - 3);
        int n = stoi(sub);
        
        if(n % 8 == 0) return 1; 
        
        return -1;
    }
};