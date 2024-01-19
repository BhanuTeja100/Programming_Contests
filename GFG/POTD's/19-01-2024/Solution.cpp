class Solution {
  public:
    vector<vector<int>> kTop(vector<int>& arr, int N, int K) {
       vector<vector<int>> res;
        unordered_map<int, int> mp;
        set<pair<int, int>> s;
        
        for(auto i: arr) {
            vector<int> row;
            if(mp[i] > 0)
                s.erase({-mp[i], i});
                
            mp[i]++;
            s.insert({-mp[i], i});
            
            int t = 1;
            for(auto j: s) {
                if(t > K)
                    break;
                    
                row.push_back(j.second);
                t++;
            }
            
            res.push_back(row);
        }

        return res;
    }
};