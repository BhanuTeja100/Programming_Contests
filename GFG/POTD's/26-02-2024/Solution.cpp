 void solve(string s, int ind, string cur, vector<string> &res){
	        if(ind == s.length()){
	            if(cur.length() > 0){
	                res.push_back(cur);
	            }
	            return;
	        }
	        
	        //take
	        cur.push_back(s[ind]);
	        solve(s, ind+1, cur, res);
	        
	        //not take
	        cur.pop_back();
	        solve(s, ind+1, cur, res);
	    }
		vector<string> AllPossibleStrings(string s){
		    string cur = "";
		    
		    vector<string> res;
		    
		    int ind = 0;
		   
		    solve(s, ind, cur, res);
		    
		    
		    sort(res.begin(), res.end());
		    
		    return res;
		}