#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N, K;
  cin >> N >> K;
  int64_t A[1 << 18];
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }
  for (int i = K + 1; i <= N; i++) {
    if (A[i-K] < A[i]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
  // int64_t ans = 0;
  // vector<int> ansvec;
  // for (int i = K; i < N + 1; i++) {
  //   int64_t sum = 1;
  //   for (int j = K-K; j < K; j++) {
  //     sum *= vec[j+i-K];
  //   }
  //   ansvec.push_back(sum);
  //   if (i != K) {
  //     if(ansvec[i-K] > ansvec[i-K-1]){
  //       cout << "Yes" << endl;
  //     } else {
  //       cout << "No" << endl;
  //     }
  //   }
  // }

}