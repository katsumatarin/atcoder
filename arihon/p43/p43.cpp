#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX_N = 100000;

int N, S[MAX_N], T[MAX_N];

pair<int, int> itv[MAX_N];

void solve()
{
    cin >> N;
    for(int s = 0; s < 5; s++) cin >> S[s];
    for(int t = 0; t < 5; t++) cin >> T[t];

    for(int i = 0; i < N; i++) {
        itv[i].first = T[i];
        itv[i].second = S[i];
    }
    sort(itv, itv + N);

    int ans = 0, t = 0;
    for(int i = 0; i < N; i++) {
        if(t < itv[i].second) {
            ans++;
            t = itv[i].first;
        }
    }

    printf("%d\n", ans);
}

int main()
{
    cout << fixed << setprecision(15);
    solve();
    return 0;
}