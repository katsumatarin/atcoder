#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int w, a, b;
  cin >> w >> a >> b;

  int ans = 0;

  if(a < b) ans = b - (a+w);
  else ans = a - (b+w);

  if(ans > 0) cout << ans << endl;
  else cout << 0 << endl;
  return 0;
}