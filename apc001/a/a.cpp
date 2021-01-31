#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t X, Y;
  cin >> X >> Y;
  int64_t ans = -1;
  int64_t cnt = 0;
  if (X % Y == 0) {
    cout << ans << endl;
    return 0;
  }
  while(true){
    int64_t i = 2;
    cnt = X * i;
    if (cnt % Y != 0) {
      cout << cnt << endl;
      return 0;
    }
    i++;
  }
}