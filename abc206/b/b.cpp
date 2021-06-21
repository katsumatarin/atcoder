#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int i = 0, ans = 0;
    while(true) {
        i++;
        ans += i;
        if(ans >= n) break;
    }
    cout << i << endl;
    return 0;
}