#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll blue = a, red = 0;

    ll ans = 0;
    if(c * d <= b) {
        ans = -1;
    } else {
        while(true){
            if(blue <= red * d) break;
            blue += b;
            red += c;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}