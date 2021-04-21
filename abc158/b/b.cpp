#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t n, a, b;
  cin >> n >> a >> b;
  int64_t m = n / (a + b);
  int64_t ans = m * a;
  int64_t p = n % (a + b);
  ans += min(p, a);
  cout << ans << endl;
}