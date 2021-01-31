#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, x;
  cin >> N >> x;
  vector<int> vec;
  int a = 0, sum = 0, ans = 0;
  for(int i = 0; i < N; i++){
    cin >> a;
    sum += a;
    vec.push_back(a);
  }

  sort(vec.begin(), vec.end());

  if (vec[0] > x) {
    cout << ans << endl;
  }

  if (sum <= x) {
    ans = N;
    cout << ans << endl;
  }
}