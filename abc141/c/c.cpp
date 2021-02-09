#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> vec;
  int kq = K - Q;
  for (int i = 0; i < N; i++) {
    vec.push_back(kq);
  }
  int A;
  for (int i = 0; i < Q; i++) {
    cin >> A;
    vec[A-1] += 1;
  }
  for (int i = 0; i < N; i++) {
    if(vec[i] > 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}