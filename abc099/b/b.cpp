#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll a, b;
    cin >> a >> b;
    ll d = b - a;
    ll h = d * (d - 1) / 2;
    cout << h - b << endl;
    return 0;
}