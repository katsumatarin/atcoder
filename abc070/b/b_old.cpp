#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  int ans;
  if (A <= C && C <= B) {
    if (B <= D) {
      ans = B - C;
    } else if (D <= B) {
      ans = D - C;
    }
  } else if (C <= A && A <= D) {
    if (D <= B) {
      ans = D - A;
    } else if (B <= D) {
      ans = B - A;
    }
  } else {
    ans = 0;
  }
  cout << ans << endl;
}