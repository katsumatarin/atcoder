#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  bool odd = true;
  for (int i = 0; i < S.length(); i++) {
    if (odd == true) {
      if (isupper(S[i])) {
        cout << "No" << endl;
        return 0;
      } else {
        odd = false;
      }
    } else {
      if (islower(S[i])) {
        cout << "No" << endl;
        return 0;
      } else {
        odd = true;
      }
    }
  }
  cout << "Yes" << endl;
}