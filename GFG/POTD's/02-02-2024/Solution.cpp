class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int flag = 1;
        int val = 0;
        if(s[0] == '-') flag = -1;
        
        for(int i=0; i<s.length(); i++){
            if(i == 0)
            if(s[i] == '-') continue;
            
            if(s[i] - '0' <= 9 && s[i]-'0' >= 0){
                val = val*10 + (s[i]-'0');
            }
            else{
                return -1;
            }
        }
        return flag*val;
    }
};