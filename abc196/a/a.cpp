#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int x = max(a, b);
  int y = min(c, d);
  int ans = x - y;
  cout << ans << endl;
}