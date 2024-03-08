class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	      int cnt = 0;
        unordered_map<char,int> mp;
        for(int i=0; i<s.length(); i++)
        {
            mp[s[i]]++;
        }
        vector<int> v;
        
        for(auto it : mp)
        {
            v.push_back(it.second);
        }
        
        if(v.size() == 1)
          return true;
          
        map<int,int> mp2;
        
        for(int i=0; i<v.size(); i++)
        {
            mp2[v[i]]++;
        }
        
        
        if(mp2.size() == 1)
          return true;
          
        if(mp2.size() > 2)
          return false;
          
        auto it = mp2.begin();
     
       
        auto it2 = mp2.begin();
        it2++;
      
        
        if(it->first == 1 && it->second == 1)
          return true;
          
      
        else if(it2->first - it->first == 1 && it2->second == 1)
          return true;
          
        return false;
	}
};