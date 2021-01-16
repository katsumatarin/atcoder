#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, g, b;
  cin >> r >> g >> b;
  int intAns = r * 100 + g * 10 + b;
  string ans;
  if (intAns % 4 == 0) {
    ans = "YES";
  } else {
    ans = "NO";
  }
  cout << ans << endl;
}