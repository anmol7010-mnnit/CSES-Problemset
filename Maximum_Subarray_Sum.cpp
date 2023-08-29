#include<bits/stdc++.h>
using namespace std;
#define ll long long
                
int main () {
            
    ll n;
    cin >> n;

    ll arr[n];
    
    ll sum = 0;
    ll maxi = INT_MIN;

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (ll i = 0; i < n; i++) {
        sum = sum + arr[i];

        maxi = max(maxi,sum);

        if (sum < 0) {
            sum = 0;
        }
    }
    cout << maxi << endl;
}