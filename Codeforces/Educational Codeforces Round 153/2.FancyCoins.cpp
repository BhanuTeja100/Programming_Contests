 // Another method to solve the same problem

#include <iostream>

using namespace std;


#define ll long long 
#define  pb push_back





int main(){

    ll t;

    cin >> t;

    while(t--){
          ll m, k, n_1, n_k;

          cin >> m >> k >> n_1 >> n_k;

          ll temp = min(n_k*k, (m/k)*k); 

          temp = m - temp;

          temp = max(0ll, temp-n_1);

          ll ans1 = (temp/k) + (temp%k);


          if(n_1 >= k - (temp%k)){
            ll ans2 = 1 + (temp/k); 
            ans1 = min(ans1, ans2);
          }

          cout << ans1 << endl;
    }
}