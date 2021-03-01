#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  int ans = 0, cnt = 0;
  int cnti = 0, cntd = 0;
  for(int i = 0; i < N; i++) {
    if(S.substr(i, 1) == "I") {
      cnt++;
      if(ans < cnt) {
        ans = cnt;
      }
    } else {
      cnt--;
    }
  }
  cout << ans << endl;
}