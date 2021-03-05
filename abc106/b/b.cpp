#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int cnt = 0, ans = 0;

  for(int i = 1; i <= N; i++) {
    if(i % 2 == 1) {
      for(int j = 1; j <= i; j++) {
        if(i % j == 0) {
          cnt++;
        }
      }
      if(cnt == 8) {
        ans++;
      }
      cnt = 0;
    }
  }

  cout << ans << endl;
}