#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, k;
    cin >> n >> k;

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            int cnt = (i+1) * 100 + (j+1);
            ans += cnt;
        }
    }
    cout << ans << endl;
}