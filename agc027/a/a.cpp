#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N, x;
  cin >> N >> x;

  vector<int64_t> vec;
  int64_t a = 0, sum = 0, ans = 0;

  for(int64_t i = 0; i < N; i++){
    cin >> a;
    sum += a;
    vec.push_back(a);
  }

  sort(vec.begin(), vec.end());

  if(sum == x) {
    ans = N;
  }

  if (sum < x) {
    ans = N - 1;
  }

  int64_t k = 0;
  if (sum > x) {
    while(x >= vec[k]){
      x -= vec[k];
      k++;
    }
    ans = k;
  }

  cout << ans << endl;
}