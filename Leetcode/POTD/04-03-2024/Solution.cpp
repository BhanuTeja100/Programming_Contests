class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();

        sort(tokens.begin(), tokens.end());

        int i=0, j = n-1;
        int score = 0, max_sc = 0;
        while(i <= j){
            if(tokens[i] <= power){
                power -= tokens[i];
                score += 1;
                i++;
                max_sc = max(score, max_sc);
            }
            else if(score > 0){
                power += tokens[j];
                score -= 1;
                j--;
            }
            else{
                break;
            }
        }

        return max_sc;
    }
};