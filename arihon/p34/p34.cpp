#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int a[20];
int n, k;

bool dfs(int i, int sum){
    if(i == n) return (sum == k);

    if(dfs(i + 1, sum)) return true;

    if(dfs(i + 1, sum + a[i])) return true;

    return false;
}

void solve(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
    if(dfs(0, 0)) printf("Yes\n");
    else printf("No\n");
}

int main(){
    solve();
    return 0;
}