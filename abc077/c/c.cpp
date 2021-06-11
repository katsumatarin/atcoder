#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    vector<ll> a_vec(n), b_vec(n), c_vec(n);

    for(ll i = 0; i < n; i++) cin >> a_vec[i];
    for(ll i = 0; i < n; i++) cin >> b_vec[i];
    for(ll i = 0; i < n; i++) cin >> c_vec[i];

    sort(a_vec.begin(), a_vec.end());
    sort(b_vec.begin(), b_vec.end());
    sort(c_vec.begin(), c_vec.end());

    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        ll num1 = lower_bound(a_vec.begin(), a_vec.end(), b_vec[i]) - a_vec.begin();
        ll num2 = c_vec.end() - upper_bound(c_vec.begin(), c_vec.end(), b_vec[i]);
        if(num1!=0 && num2!=0) ans += num1 * num2;
    }

    cout << ans << endl;

    return 0;
}