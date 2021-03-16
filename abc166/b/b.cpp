#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;

  int d = 0, A = 0;
  vector<int> vec_sunuke_okashi;
  for(int i = 0; i < K; i++) {
    cin >> d;
    for(int j = 0; j < d; j++) {
      cin >> A;
      vec_sunuke_okashi.push_back(A);
    }
  }
  int ans = 0;
  for(int i = 1; i < N + 1; i++) {
    auto result = find(vec_sunuke_okashi.begin(), vec_sunuke_okashi.end(), i);
    if(result == vec_sunuke_okashi.end()) {
      ans++;
    }
  }

  cout << ans << endl;
}