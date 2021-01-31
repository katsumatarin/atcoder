#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int strLen = S.length();
  string ans = "";
  for (int i = 0; i < strLen; i++) {
    ans += 'x';
  }
  cout << ans << endl;
}