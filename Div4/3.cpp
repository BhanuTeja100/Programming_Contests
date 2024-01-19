#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
            char c;
            ll sum = 0;
            for(int i = 1; i <= 10; i++){
                for(int j=1; j <= 10; j++){
                    int min_i = 0;
                    int min_j = 0;
                    cin >> c;
                    if(c == 'X'){
                       min_i = min(i, 10-i+1);
                       min_j = min(j, 10-j+1);

                       sum += min(min_i,min_j);
                    }
                }
            }

            cout << sum << endl;

    }
}