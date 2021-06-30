#include <functional>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <limits>
#include <iterator>
#include <string>

using namespace std;
typedef long long ll;
const int MAX_N = 20000;
int N, L[MAX_N];;

void solve()
{
    ll ans = 0;

    // 板が１本になるまで適用
    while (N > 1) {
        // 一番短い板mii1, 次に短い枝mii2を求める
        int mii1 = 0, mii2 = 1;
        if(L[mii1] > L[mii2]) swap(mii1, mii2);

        for(int i = 2; i < N; i++) {
            if(L[i] < L[mii1]) {
                mii2 = mii1;
                mii1 = i;
            }
            else if(L[i] < L[mii2]) {
                mii2 = i;
            }
        }

        // それらを結合
        int t = L[mii1] + L[mii2];
        ans += t;

        if(mii1 == N - 1) swap(mii1, mii2);
        L[mii1] = t;
        L[mii2] = L[N - 1];
        N--;
    }
    cout << ans << "\n";
}

int main()
{
    cin >> N;
    for(int i = 0; i < N; i++) cin >> L[i];
    cout << fixed << setprecision(15);
    solve();
    return 0;
}