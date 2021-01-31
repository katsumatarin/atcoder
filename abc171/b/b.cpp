#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> vec;
  int p;
  for(int i = 0; i < N; i++){
    cin >> p;
    vec.push_back(p);
  }
  sort(vec.begin(), vec.end());
  int ans = 0;
  for(int i = 0; i < K; i++){
    ans += vec[i];
  }
  cout << ans << endl;
}