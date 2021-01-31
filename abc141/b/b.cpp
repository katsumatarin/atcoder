#include <bits/stdc++.h>
using namespace std;

int main() {
  string S = "";
  cin >> S;
  for (int i = 0; i < S.length(); i++) {
    if (i % 2 == 0) {
      if (S.substr(i, 1) != "R" && S.substr(i, 1) != "U" && S.substr(i, 1) != "D") {
        cout << "No" << endl;
        return 0;
      }
    } else {
      if (S.substr(i, 1) != "L" && S.substr(i, 1) != "U" && S.substr(i, 1) != "D") {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}