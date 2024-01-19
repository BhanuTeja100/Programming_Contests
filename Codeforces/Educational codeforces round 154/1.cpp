#include<bits/stdc++.h>

using namespace std;

#define ll long long


int isNotPrime(ll n){
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0) return 1;
    }

    return 0;

}

int main(){
    ll t;
    cin >> t;

    while(t--){
        string str;
        ll out;
        int check = 0;
        cin>>str;

        for(int i=0; i<str.length()-1; i++){
            for(int j=i+1; j<str.length(); j++){
                ll num =  (str[i]-'0')*10 +  (str[j]-'0');

                if(!isNotPrime(num) && num != 2 && num != 3 && num != 5 && num != 7){
                    out = num;
                    check = 1;
                    break;
                }
            }
        }

        if(check) cout << out << endl;

        else cout << -1 << endl;
    }
}