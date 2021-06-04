#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll left = 0, right = 2e9;
    while (right - left > 1) {
        ll x = (left + right) / 2;
        if (x * (x + 1) / 2 <= n + 1) left = x;
        else right = x;
    }
    cout << n - left + 1 << endl;
    return 0;
}