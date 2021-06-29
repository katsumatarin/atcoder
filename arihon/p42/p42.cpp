#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int V[6] = {1, 5, 10, 50, 100, 500};
int C[6], A;

void solve()
{
    for(int i = 0; i < 6; i++) cin >> C[i];
    cin >> A;

    int ans = 0;

    for(int i = 5; i >= 0; i--) {
        int t = min(A / V[i], C[i]);
        A -= t * V[i];
        ans += t;
    }
    printf("%d\n", ans);
}

int main()
{
    cout << fixed << setprecision(15);
    solve();
    return 0;
}