class Solution{
    public:
        int ans;
        void f(int ind, int n, vector<pair<int, int>> &edges, unordered_set<int>&stk){
            if(ind > n){
                for(auto it: edges){
                    if(stk.find(it.first) == stk.end() && stk.find(it.second) == stk.end()){
                        return;
                    }
                    
                }
                    ans = (stk.size() < ans) ? stk.size():ans;
                    return;
                
            }
                f(ind+1, n, edges, stk);
                stk.insert(ind);
                f(ind+1, n, edges, stk);
                stk.erase(ind);
        }
        int vertexCover(int n, vector<pair<int, int>> &edges) {
                ans = n;
                unordered_set<int> stk;
                f(1,n,edges,stk);
                return ans;
            }
};