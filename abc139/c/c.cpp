#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    vector<int> vec(n);
    for(ll i = 0; i < n; i++) cin >> vec[i];

    ll ans = 0;
    for(ll i = 0; i < n-1; i++) {
        ll sum = 0;
        ll now = vec[i];
        for(ll j = i+1; j < n; j++) {
            ll next = vec[j];
            if(now < next) {
                break;
            } else {
                now = next;
                sum++;
            }
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}