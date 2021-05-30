#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, k;
    cin >> n >> k;

    typedef pair<ll, ll> pair;
    vector<pair> vec;
    for(int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        vec.push_back(pair(a, b));
    }

    sort(vec.begin(), vec.end());

    ll now_money = k, now_place = 0;

    for(auto& i: vec) {
        ll distance = i.first - now_place;
        if(now_money - (distance) >= 0) {
            now_money -= distance;
            now_money += i.second;
            now_place += distance;
        } else {
            break;
        }
    }

    now_place += now_money;
    cout << now_place << endl;
}