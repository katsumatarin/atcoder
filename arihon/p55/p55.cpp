#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX_N = 100;
const int MAX_W = 10000;
int dp[MAX_N + 1][MAX_W + 1];
int n, W;
int w[MAX_N], v[MAX_N];

int rec(int i, int j) {
    if(dp[i][j] >= 0) {
        return dp[i][j];
    }
    int res;
    if(i == n) {
        res = 0;
    } else if(j < w[i]) {
        res = rec(i + 1, j);
    } else {
        res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
    }
    return dp[i][j] = res;
}

void solve()
{
    cin >> n;
    for(int i = 0; i < n; i++) cin >> w[i] >> v[i];
    cin >> W;

    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j <= W; j++) {
            if(j < w[i]) {
                dp[i][j] = dp[i + 1][j];
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
            }
        }
    }
    cout << rec(0, W) << "\n";
}

int main()
{
    cout << fixed << setprecision(15);
    solve();
    return 0;
}