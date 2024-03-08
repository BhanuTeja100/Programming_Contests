class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
            int n = pattern.length();
            int m = text.length();
            // res array
            vector<int> res;
            
            //loop 
            for(int i=0;i<m;i++)
            {
                    
                    string sub = text.substr(i,n);
                    // checking for the substring
                    if(sub == pattern)
                    {
                        res.push_back(i+1);
                    }
            }
            return res;
        }
     
};