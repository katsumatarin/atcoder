#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> vec;
  int A;
  for (int i = 0; i < N; i++) {
    cin >> A;
    vec.push_back(A);
  }
  int sum = 0;
  for (int i = K; i < N + 1; i++) {
    for (int j = i; j > K; j--) {
      sum = vec[];
    }
  }
}