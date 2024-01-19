#include<bits/stdc++.h>

using namespace std;

#define  ll long long

int main(){

    ll t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n+1);
       
        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }

         



        if(n % 2 == 0){
         cout << 2 << endl;
         cout << 1 << " " << n << endl;       
         cout << 1 << " " << n << endl;       
        }
        else{
         cout << 4 << endl;
         cout << 1 << " " << n-1 << endl;       
         cout << 1 << " " << n-1 << endl;       
         cout << n-1 << " " << n << endl;       
         cout << n-1 << " " << n << endl;       

        }
    }
}