class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string str = "123456789";
        vector<int> sol;
        for(int i=0; i<9; i++){
            for(int j=i+1; j<=9; j++){
                int cur = stoi(str.substr(i,j-i));

                if(cur >= low && cur <= high){
                    sol.push_back(cur);
                }
            }
        }

        sort(sol.begin(), sol.end());

        return sol;
    }
};