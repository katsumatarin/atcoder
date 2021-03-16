#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, H, N;
  cin >> W >> H >> N;

  int x_min = 0;
  int x_max = W;
  int y_min = 0;
  int y_max = H;

  int x, y, a;
  for(int i = 0; i < N; i++) {
    cin >> x >> y >> a;

    if(a == 1) {
      if(x > x_min) {
        x_min = x;
      }
    } else if(a == 2) {
      if(x < x_max) {
        x_max = x;
      }
    } else if(a == 3) {
      if(y > y_min) {
        y_min = y;
      }
    } else if(a == 4){
      if(y < y_max) {
        y_max = y;
      }
    }
  }

  W = x_max - x_min;
  H = y_max - y_min;

  int ans = W * H;
  if(ans > 0) {
    cout << ans << endl;
  } else {
    cout << 0 << endl;
  }
}