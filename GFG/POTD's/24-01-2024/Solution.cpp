
class Solution{
  public:
  
    void dfs(vector<int> adjList[], int node, vector<int>& vis){
        vis[node] = 1;
        
        for(auto it: adjList[node]){
            if(!vis[it]){
                dfs(adjList, it, vis);
            }
        }
    }


    int isTree(int n, int m, vector<vector<int>> &adj) {
        // code here
        if(m != n-1)    return false;
        
        vector<int>vis(n, 0);
        
        vector<int> adjList[n];
        
        for(auto it: adj){
            adjList[it[0]].push_back(it[1]);
            adjList[it[1]].push_back(it[0]);
        }
        
        dfs(adjList, 0, vis);
        
        for(auto it: vis){
            if(it == 0) return 0;
        }
        return 1;
    }
};