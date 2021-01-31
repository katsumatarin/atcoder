#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, N;
  cin >> H >> N;
  int cnt = 0;
  int A = 0;
  for (int i = 0; i < N; i++) {
    cin >> A;
    cnt += A;
  }
  if (cnt >= H) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}