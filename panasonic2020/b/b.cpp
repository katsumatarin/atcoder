#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll h, w, ans;
  cin >> h >> w;
  if(h==1 || w==1) ans = 1;
  else ans = (h*w+1) / 2;
  cout << ans << endl;
  return 0;
}