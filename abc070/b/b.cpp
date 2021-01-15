#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  int ans;
  ans = min(B, D) - max(A, C);
  if (ans < 0)
    ans = 0;
  cout << ans << endl;
}