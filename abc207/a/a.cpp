#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int x = a+b;
    int y = b+c;
    int z = c+a;
    cout << max(x, max(y, z)) << endl;
    return 0;
}