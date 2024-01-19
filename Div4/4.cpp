#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
            int n,k;
            cin >> n >> k;
            int ans = 0;
            string str;

            cin >> str;

            for(int i=0; i<n; i++){
                if(str[i] == 'B'){
                    i += k-1;
                    ans++;
                }
            }
            cout << ans << endl;
    }
}