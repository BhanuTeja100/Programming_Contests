#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(int n){
   
   
    vector<int> a(n+1, 0);
    
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    if(a[1] > n){
      cout << "NO" << endl;
      return;
    }
    vector<int> b(n+1, 0);

    for(int i=1; i<=n; i++){
      b[a[i]]+=1;
    }

    for(int i=n-1; i>0; i--){
      b[i] += b[i+1];
    }


    for(int i=1; i<=n; i++){
        if(b[i] != a[i]){
          cout << "NO" << endl;
          return;
        }
    }

 cout << "YES" << endl;
 return;
}

int main(){
    ll t;
    cin >> t;

    while(t--){

    ll n;
    cin >> n;
    solve(n);
}

}