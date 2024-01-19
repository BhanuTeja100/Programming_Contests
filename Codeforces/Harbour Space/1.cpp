#include<bits/stdc++.h>


using namespace std;

#define ll long long



void solve(ll x, ll y, ll n, vector<int> &a){
    if((n * (n-1))/2 + x  > y) {
        cout << -1 << endl;
        return;
    }

    else{
        a[0] = x;
        a[n-1] = y;
        int k = 1;
        for(int i = n-2; i > 0; i--){
            a[i] = a[i+1] - k;
            k++;
        }

        for(int i=0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
}
int main(){


    ll t;
    cin >> t;

    while(t--){
        ll x, y, n, res = -1;
        cin >> x >> y >> n;

        vector<int> a(n);

    
    
        solve(x, y, n, a);
    


    }
}