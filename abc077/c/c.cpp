#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    for(ll i = 0; i < n; i++) cin >> c[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    ll now_b, num_a, num_c, res = 0;
    ll idx_bound_a, idx_bound_c;
    for(ll i = 0; i < n; i++) {
        now_b = b[i];
        num_a = 0;
        num_c = 0;

        auto iter_a = lower_bound(a.begin(), a.end(), now_b);
        idx_bound_a = distance(a.begin(), iter_a);
        num_a = (iter_a == a.end())? n: (idx_bound_a+1)-1;

        auto iter_c = upper_bound(c.begin(), c.end(), now_b);
        idx_bound_c = distance(c.begin(), iter_c);
        num_c = (iter_c == c.end())? 0: n-idx_bound_c;

        res += num_a * num_c;
    }

    cout << res << endl;

    return 0;
}