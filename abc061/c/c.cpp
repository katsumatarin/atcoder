#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, k, a, b;
    cin >> n >> k;
    vector<int> num(1000000+1, 0);
    for(ll i = 0; i < n; i++) {
        cin >> a >> b;
        num[a] += b;
    }

    vector<ll> partial;
    copy(num.begin(), num.end(), back_inserter(partial));
    partial_sum(num.begin(), num.end(), partial.begin());

    auto iter = lower_bound(partial.begin(), partial.end(), k);
    cout << distance(partial.begin(), iter) << endl;
    return 0;
}

