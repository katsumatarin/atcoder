#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  int str_len = S.size();


  for(int i = 0; i < str_len; i++) {
    string modifiedS = S[str_len - 1] + S.substr(0, str_len -1);
    if(modifiedS == T) {
      cout << "Yes" << endl;
      return 0;
    }
    S = modifiedS;
  }

  cout << "No" << endl;
  return 0;

}