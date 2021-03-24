#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec;

  int W, sum = 0;
  for(int i = 0; i < N; i++) {
    cin >> W;
    vec.push_back(W);
    sum += W;
  }

  int ans = 101;
  for(int T = 1; T < N; T++) {
    int A = 0, B = 0;
    for(int i = 0; i < T; i++) {
      A += vec[i];
    }
    B = sum - A;
    if(max(A, B) - min(A, B) < ans) {
      ans = max(A, B) - min(A, B);
    }
  }

  cout << ans << endl;
}