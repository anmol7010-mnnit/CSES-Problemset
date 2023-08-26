// Concept => By using recursive way of power function i calculate 2 ki power n.

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
long long power(long long x, long long y) {
        
    if (y == 0)
        return 1;
        
    else if (y % 2 == 0)
        return power(x, y / 2)%mod * power(x, y / 2)%mod;
        
    else
        return x * power(x, y / 2)%mod * power(x, y / 2)%mod;
    }
 
int main ()
{
    long long n;
    cin >> n;
    cout << power(2,n) << endl;
}
