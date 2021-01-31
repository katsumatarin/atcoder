#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, X;
  cin >> N >> X;
  string S;
  cin >> S;
  int cnt = X;
  for (int i = 0; i < N; i++) {
    if (S[i] == 'x') {
      if (cnt != 0) {
        cnt--;
      }
    } else {
      cnt++;
    }
  }
  cout << cnt << endl;
}