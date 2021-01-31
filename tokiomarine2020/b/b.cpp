#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t A, V, B, W, T;
  cin >> A >> V >> B >> W >> T;
  if (V < W) {
    cout << "NO" << endl;
    return 0;
  }
  int64_t nowA = A;
  int64_t nowB = B;
  if (A < B) {
    for (int i = 0; i < T; i++) {
      nowA += V;
      nowB += W;
      if (nowA >= nowB) {
        cout << "YES" << endl;
        return 0;
      }
    }
  } else {
    for (int i = 0; i < T; i++) {
      nowA -= V;
      nowB -= W;
      if (nowA <= nowB) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}