#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  cin >> X;
  int ans = 0;
  int gohyaku = X / 500;
  ans += gohyaku * 1000;
  X = X - (500 * gohyaku);
  int go = X / 5;
  ans += go * 5;
  cout << ans << endl;
}