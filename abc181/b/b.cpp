#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int64_t a, b;
  int64_t ans = 0;
  for (int i = 0; i < N; i++){
    cin >> a >> b;
    if (a <= 1) {
      ans += (b + 1) * b / 2;
    } else {
      ans += (b + 1) * b / 2;
      ans -= (a - 1) * a / 2;
    }
  }
  cout << ans << endl;
}