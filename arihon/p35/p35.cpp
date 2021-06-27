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
int n, m;
string field[100];

void dfs(int x, int y) {
    field[x][y] = '.';
    for(int dx = -1; dx <= 1; dx++) {
        for(int dy = -1; dy <= 1; dy++) {
            int nx = x + dx, ny = y + dy;
            if(0 <= nx && nx < n && 0 <= ny && ny < m && field[nx][ny] == 'W') dfs(nx, ny);
        }
    }
    return;
}

void solve()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> field[i];
    int res = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(field[i][j] == 'W') {
                dfs(i, j);
                res++;
            }
        }
    }
    printf("%d\n", res);
}

int main()
{
    cout << fixed << setprecision(15);
    solve();
    return 0;
}