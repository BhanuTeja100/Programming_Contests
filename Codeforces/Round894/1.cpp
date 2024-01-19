#include<bits/stdc++.h>

using namespace std;

#define ll long long 
#define v vector 
int main(){
    ll t;
    cin >> t;

    while(t--){

    ll n, m;
    cin >> n  >> m;
    string str = "vika";
    ll len = 0;
    char arr[n][m];


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           cin >> arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[j][i] == str[len]){
                len ++;
                break;
            }
        }
    }
    if(len == 4){ 
        cout << "YES" << endl;
    } 
    else{
        cout << "NO" << endl;
    }
    }

}