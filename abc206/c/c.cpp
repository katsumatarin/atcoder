#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for(ll i = 0; i < n; i++)  cin >> vec[i];
    sort(vec.begin(), vec.end());

    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        ll key = vec[i];
        auto iter = upper_bound(vec.begin(), vec.end(), key);
        ans += vec.end() - iter;
    }

    cout << ans << endl;
    return 0;
}