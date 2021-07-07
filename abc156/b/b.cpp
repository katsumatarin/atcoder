#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k;

void solve()
{
    cin >> n >> k;

    int ans = 0;
    while(0 < n) {
        n /= k;
        ans++;
    }
    cout << ans << endl;
}

int main()
{
    cout << fixed << setprecision(15);
    solve();
    return 0;
}