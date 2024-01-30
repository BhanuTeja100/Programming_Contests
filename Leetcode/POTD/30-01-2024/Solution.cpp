class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;

        int n = tokens.size();

        for(int i=0; i<n; i++){
            s.push(tokens[i]);

            if(s.top() == "+"){
                s.pop();
                string tmp1 = s.top();
                s.pop();
                string tmp2 = s.top();
                s.pop();
                
                s.push(to_string(stoi(tmp1) + stoi(tmp2)));
            } else  if(s.top() == "-"){
                s.pop();
                string tmp1 = s.top();
                s.pop();
                string tmp2 = s.top();
                s.pop();
                s.push(to_string(stoi(tmp2) - stoi(tmp1)));
            } else  if(s.top() == "*"){
                s.pop();
                string tmp1 = s.top();
                s.pop();
                string tmp2 = s.top();
                s.pop();
                s.push(to_string(stoi(tmp2) * stoi(tmp1)));
            } else  if(s.top() == "/"){
                s.pop();
                string tmp1 = s.top();
                s.pop();
                string tmp2 = s.top();
                s.pop();
                s.push(to_string(stoi(tmp2)/stoi(tmp1)));
            }
        }

        return stoi(s.top());
    }
};