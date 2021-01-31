#include <bits/stdc++.h>
using namespace std;

int main() {
  long long X;
  cin >> X;
  long long yokin = 100;
  int ans = 0;
  while (yokin < X) {
    yokin += yokin / 100;
    ans++;
  }
  cout << ans << endl;
  return 0;
}