#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        ll n;
        int mini = INT_MAX;
        ll product = 1;
        cin >> n;
        int n_o_z = 0;
        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++){
            if(arr[i] != 0)
                product = product * arr[i];
            mini = min(mini, arr[i]);

            if(arr[i] == 0) n_o_z++;
        }

        if(n_o_z > 1) cout << 0 << endl;

        else if(mini == 0 && n_o_z == 1){
            cout << product << endl;
        }
        else {
            cout << (product/mini) * (mini + 1) << endl;
        }


    }
}