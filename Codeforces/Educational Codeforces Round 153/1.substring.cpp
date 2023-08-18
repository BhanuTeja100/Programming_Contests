#include<bits/stdc++.h>

using namespace std;

#define ll long long int 



int main(){
    int t;

    cin >> t;

    while(t--){
        string s;
        string str1 = "";
        string str2 = "";
        cin >> s;

        if(s == "()"){
            cout << "NO" << endl;
            continue;
        }

        
            for(int i=0; i<s.length(); i++){
                str1 += "()";
            }

            for(int i=0; i<s.length(); i++){
                str2 += "(";
            }
             for(int i=0; i<s.length(); i++){
                str2 += ")";
            }
            cout << "YES" << endl;
            if(str2.find(s) != string::npos) cout << str1 << endl;
            else cout << str2 << endl;
            
            

        

        

       
    }
}