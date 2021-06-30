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
const int MAX_N = 1000;

int N, R;
int X[MAX_N];

void solve2()
{
    for(int x = 0; x < N; x++) cin >> X[x];

    sort(X, X + N);

    int i = 0, ans = 0;
    while(i < N) {
        int s = X[i++];
        while (i < N && X[i] <= s + R) i++;

        int p = X[i - 1];
        while (i < N && X[i] <= p + R) i++;
        ans++;
    }
    cout << ans << "\n";
}

void solve(){
    while(true){
        cin >> R >> N;
        if(N == -1 && R == -1){
            break;
        }
        solve2();
    }
}

int main()
{
    cout << fixed << setprecision(15);
    solve();
    return 0;
}