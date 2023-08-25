// Concept => Total n ka sum nikala aur phir jitne n diye unka sum nikala aur dono ko subtract kr diya.

#include <bits/stdc++.h>
using namespace std;

int main () {
    long long int n,input;
    cin >> n;
    long long int sum = 0;
    for (int i = 0; i < n-1; i++) {
        cin >> input;
        sum+=input;
    }
    cout << n*(n+1)/2 - sum << endl;
}
