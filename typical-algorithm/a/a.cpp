#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];
    auto iter = lower_bound(vec.begin(), vec.end(), k);

    int ans = distance(vec.begin(), iter);
    if(ans != vec.size()) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}