#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, ans;
  cin >> N;
  if (N == 1) {
    ans = 1;
  } else if (N < 4) {
    ans = 2;
  } else if (N < 8) {
    ans = 4;
  } else if (N < 16) {
    ans = 8;
  } else if (N < 32) {
    ans = 16;
  } else if (N < 64) {
    ans = 32;
  } else {
    ans = 64;
  }
  cout << ans << endl;

  // int N, ans;
  // for (int i = 0; i < N; i++) {
  //   if (i%2)
  // }
  // cin >> N;
  // cout << ans <<endl;

}