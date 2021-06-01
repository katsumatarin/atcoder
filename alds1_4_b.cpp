#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, q;
    cin >> n;
    vector<int> s_vec(n);
    for(int i = 0; i < n; i++) cin >> s_vec[i];
    cin >> q;
    vector<int> t_vec(q);
    for(int i = 0; i < q; i++) cin >> t_vec[i];

    int res = 0;
    for(int i = 0; i < q; i++) {
        if(*lower_bound(s_vec.begin(), s_vec.end(), t_vec[i] == t_vec[i])) res++;
    }

    cout << res << endl;

    return 0;
}