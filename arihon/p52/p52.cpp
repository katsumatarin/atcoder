#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX_N = 100;
int n, W;
int w[MAX_N], v[MAX_N];

int rec(int i, int j)
{
    int res;
    if(i == n) {
        res = 0;
    } else if (j < w[i]) {
        res = rec(i + 1, j);
    } else {
        res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
    }
    return res;
}

void solve()
{
    cout << rec(0, W) << "\n";
}

int main()
{
    cin >> n >> W;
    for(int i = 0; i < n; i++) cin >> w[i] >> v[i];
    cout << fixed << setprecision(15);
    solve();
    return 0;
}