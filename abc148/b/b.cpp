#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  string s, t;
  cin >> n >> s >> t;
  string ans;
  for(int i = 0; i < n; i++) ans += s[i], ans += t[i];
  cout << ans << endl;
  return 0;
}