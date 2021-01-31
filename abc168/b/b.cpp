#include <bits/stdc++.h>
using namespace std;

int main() {
  int K;
  cin >> K;
  string S;
  cin >> S;
  if (S.length() <= K) {
    cout << S << endl;
    return 0;
  } else {
    cout << S.substr(0, K) + "..." << endl;
  }
}