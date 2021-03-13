#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;
  string n_string = to_string(N);
  int keta = n_string.size();

  int64_t ans = 0;
  int64_t sub = 1000;
  if(keta <= 3) {
    ans += 0;
  }
  if(keta >= 4) {
    ans += (N-sub+1) * 1;
    sub *= 1000;
  }
  if(keta >= 7) {
    ans += (N-sub+1) * 1;
    sub *= 1000;
  }
  if(keta >= 10) {
    ans += (N-sub+1) * 1;
    sub *= 1000;
  }
  if(keta >= 13) {
    ans += (N-sub+1) * 1;
    sub *= 1000;
  }
  if(keta >= 16) {
    ans += (N-sub+1) * 1;
  }

  cout << ans << endl;
}