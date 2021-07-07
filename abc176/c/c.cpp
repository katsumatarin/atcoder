#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll N, A;

void solve()
{
    cin >> N;
    ll max_num = 0, ans = 0;
    for(int i = 0; i < N; i++){
        cin >> A;
        max_num = max(max_num, A);
        if(max_num > A) ans += max_num - A;
    }
    cout << ans << "\n";
}

int main()
{
    cout << fixed << setprecision(15);
    solve();
    return 0;
}