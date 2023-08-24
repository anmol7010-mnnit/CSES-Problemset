#include <bits/stdc++.h>
using namespace std;

int main () {
    long long int n;
    cin >> n;
    vector <long long int> v;
    v.push_back(n);
    while(n > 1) {
        if (n % 2 == 0) {
            v.push_back(n/2);
            n = n/2;
        }
        else {
            v.push_back(n*3 + 1);
            n = n*3 + 1;
        }
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
} 