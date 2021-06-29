#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 100000000;
const int MAX_H = 100, MAX_W = 100;

typedef pair<int, int> P;

string maze[MAX_H];
int H, W;
int sy, sx;
int gy, gx;

int d[MAX_H][MAX_W];

int dy[4] = {0, 1, 0, -1}, dx[4] = {1, 0, -1, 0};

int bfs()
{
    queue<P> que;
    for(int i = 0; i < H; i++)
        for(int j = 0; j < W; j++) d[i][j] = INF;
    que.push(P(sy, sx));
    d[sy][sx] = 0;

    while (!que.empty()) {
        P p = que.front();
        que.pop();

        if(p.first == gy && p.second == gx) break;
        for(int i = 0; i < 4; i++) {
            int ny = p.first + dy[i], nx = p.second + dx[i];
            if(0 <= ny && ny < H && 0 <= nx && nx < W && maze[ny][nx] != '#' && d[ny][nx] == INF) {
                que.push(P(ny, nx));
                d[ny][nx] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gy][gx];
}

void solve()
{
    cin >> H >> W;
    for(int h = 0; h < H; h++) {
        cin >> maze[h];
        for(int w = 0; w < W; w++) {
            if(maze[h][w] == 'S') sy = h, sx = w;
            if(maze[h][w] == 'G') gy = h, gx = w;
        }
    }
    int res = bfs();
    printf("%d\n", res);
}

int main()
{
    cout << fixed << setprecision(15);
    solve();
    return 0;
}