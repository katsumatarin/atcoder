#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int s_size = S.length();
  char sentou = S[0];
  char matsubi = S [s_size - 1];
  string s_size_str = to_string(s_size - 2);
  string ans = sentou + s_size_str + matsubi;
  cout << ans << endl;
}