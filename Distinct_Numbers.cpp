#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int arr[200000];
    set <int> s;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    cout << s.size() << endl;
    
}