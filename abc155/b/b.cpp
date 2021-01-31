#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int A;
  string ans = "APPROVED";
  for (int i = 0; i < N; i++) {
    cin >> A;
    if (A % 2 == 0) {
      if (A % 3 == 0 || A % 5 == 0) {
      } else {
        ans = "DENIED";
      }
    }
  }
  cout << ans << endl;
  return 0;
}