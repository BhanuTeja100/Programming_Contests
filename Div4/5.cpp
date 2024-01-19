#include<bits/stdc++.h>
#define ll long long 
using namespace std;


bool fn(ll arr[], ll n, ll m, ll k){
    ll num = 0;
    for(int i = 0; i <n; i++){
        if(arr[i] < m){
            num += (m-arr[i]);
        }

        return num <= k;
    }
}
int main(){
    int t;
    cin >> t;
    
    while(t--){
            ll n , x;

            cin >> n >> x;

            ll arr[n];

            for(int i = 0; i < n; i++){
                cin >> arr[i];
                ll low = 0, high = INT_MAX;

                ll res = INT_MAX;

                while(low <= high){
                    ll mid = low + (high-low) / 2;

                    if(fn(arr, n, mid, x)){
                        res = mid;
                        low = mid + 1;
                    }
                    else{
                        high = mid - 1;
                    }


                }

                cout << res << endl;
    }
}

}