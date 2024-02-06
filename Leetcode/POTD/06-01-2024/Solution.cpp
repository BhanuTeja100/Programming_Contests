class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> arr;
        int size = strs.size();
        vector<string> sortedA;
        vector<string> temp;
        
        for(int i=0; i<size;i++){
            sortedA.push_back(strs[i]);
        }
        for(int i=0; i<size;i++){
            sort(sortedA[i].begin(), sortedA[i].end());
        }
        
        for(int i=0; i<size;i++){
            if(sortedA[i] != "--"){
            for(int j=i+1; j<size; j++){
                if(sortedA[i] == sortedA[j] ){
                    temp.push_back(strs[j]);
                    sortedA[j] = "--";
                }
            }
             temp.push_back(strs[i]);
            arr.push_back(temp);
            temp.clear();
            }
        }
        return arr;
    }
};