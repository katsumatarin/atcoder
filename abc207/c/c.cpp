#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<double> l(n), r(n);
    for(int i = 0; i < n; i++){
        int t;
        cin >> t >> l[i] >> r[i];
        t--;
        if(t&1) r[i] -= 0.5;
        if(t&2) l[i] += 0.5;
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            ans += (max(l[i], l[j]) <= min(r[i], r[j]));
        }
    }
    cout << ans << endl;
    return 0;
}