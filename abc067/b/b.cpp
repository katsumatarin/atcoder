#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> input_list(N);
  for (int i = 0; i < N; i++) {
    cin >> input_list.at(i);
  }
  sort(input_list.begin(), input_list.end(), greater<int>{});
  int ans;
  for (int i = 0; i < K; i++) {
    ans += input_list[i];
  }
  cout << ans << endl;
}