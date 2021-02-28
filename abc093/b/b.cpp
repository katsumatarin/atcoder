#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t A, B, K;
  cin >> A >> B >> K;

  if(B - A < K * 2) {
    for(int i = A; i < B + 1; i++) {
      cout << i << endl;
    }
  } else {
    vector<int> ans_vec;
    for(int i = A; i < A + K; i++){
      ans_vec.push_back(i);
    }
    for(int i = B - K + 1; i < B + 1; i++){
      ans_vec.push_back(i);
    }

    int size = ans_vec.size();
    for(int i = 0; i < size; i++) {
      cout << ans_vec[i] << endl;
    }
  }
}