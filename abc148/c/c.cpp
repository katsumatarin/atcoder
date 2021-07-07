#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll A, B;

void solve()
{
    cin >> A >> B;

    ll i = 1, num = B;
    while(true) {
        num = B * i;
        if(num % A == 0) break;
        i++;
    }
    cout << num << "\n";

}

int main()
{
    cout << fixed << setprecision(15);
    solve();
    return 0;
}