#include<bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
    ll t;
    cin >> t;

    while(t--){

    ll n;
    cin >> n;
    vector<int> a(n, 0);
    vector<int>b;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    b.push_back(a[0]);
    for(int i=1; i<n; i++){
        if(a[i] >= a[i-1]){
            b.push_back(a[i]);
        }
        else{
            if(a[i] > 1){
                b.push_back(a[i]-1);
                b.push_back(a[i]);
            }
            else{
                b.push_back(a[i]);
                b.push_back(a[i]);
            }
        }
    }

    cout << b.size() << endl;

    for(int i=0; i<b.size(); i++){
        cout << b[i] << " ";
    }
    cout << endl;

}
}