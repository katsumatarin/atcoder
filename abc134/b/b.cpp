#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int N, D;

void solve()
{
    cin >> N >> D;

    int len = D * 2 + 1;
    int ans = (N + len - 1) / len;

    cout << ans << "\n";
}

int main()
{
    cout << fixed << setprecision(15);
    solve();
    return 0;
}