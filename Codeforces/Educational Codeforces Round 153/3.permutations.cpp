
#include<bits/stdc++.h>

using namespace std;


#define ll long long 
#define  pb push_back





int main(){

    ll t;

    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> nums(n, 0);

        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }

        ll first_min = nums[0], second_min = INT_MAX, cnt = 0;

        for(int i=1; i<n; i++){
            first_min = min(first_min, nums[i]);


            if(nums[i] > first_min && second_min > nums[i]){
                cnt++;

                second_min = nums[i];

            }

        }
        cout << cnt << endl;

    }
}