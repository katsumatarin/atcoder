#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int ans;
  string ansStr = "";
  for (int i = 0; i < S.length(); i++) {
    if (S[i] == '0' || S[i] == '1' || S[i] == '2' || S[i] == '3' || S[i] == '4' || S[i] == '5' || S[i] == '6' || S[i] == '7' || S[i] == '8' || S[i] == '9') {
      ansStr += S[i];
    }
  }
  ans = stoi(ansStr);
  cout << ans << endl;
}