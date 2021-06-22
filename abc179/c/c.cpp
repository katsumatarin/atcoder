#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;

    ll ans = 0;
    for(ll i = 1; i < n; i++) {
        for(ll j = 1;; j++) {
            if(i * j < n) ans++;
            else break;
        }
    }
    cout << ans << endl;
}