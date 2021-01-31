#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int d1 = 0, d2 = 0;
  bool flg;
  int ans = 0, cnt = 0;
  for (int i = 0; i < N; i++) {
    cin >> d1 >> d2;
    if(d1 == d2) {
      flg = true;
    } else {
      flg = false;
      cnt = 0;
    }
    if(flg == true) {
      cnt++;
      if(ans < cnt) {
        ans = cnt;
      }
    }
  }
  if (ans >= 3) cout << "Yes" << endl;
  else cout << "No" << endl;
}