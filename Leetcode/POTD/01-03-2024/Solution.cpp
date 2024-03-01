class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0;
        string str = "";
        for(int i=0; i<s.length(); i++){
            if(s[i] == '1') ones++;
        }

        ones -= 1;

        for(int i=0; i<s.length()-1; i++){
            if(ones > 0){
                str += "1";
                --ones;
            }
            else{
                str += "0";
            }
        }
        str += "1";

        return str;

    }
};