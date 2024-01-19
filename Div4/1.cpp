#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        string str;

        cin >> str;


        if(str == "abc" || str == "acb" || str == "bac" || str == "cba"){
            cout <<"YES" << endl;
        }
        else{
            cout <<"NO" << endl;
        }
    }
}