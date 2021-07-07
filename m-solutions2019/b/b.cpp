#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string S;

void solve()
{
    cin >> S;
    int cnt = 0;
    for(int i = 0; i < S.size(); i++) if(S[i] == 'x') cnt++;
    if(cnt <= 7) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    cout << fixed << setprecision(15);
    solve();
    return 0;
}