#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int cnt = 0;
  int ac = 0;
  for (int i = 2; i < S.length()-1; i++) {
    if (S[i] == 'C') {
      cnt++;
    }
  }
  if (S[0] != 'A'){
    cout << "WA" << endl;
    return 0;
  } else if (cnt != 1){
    cout << "WA" << endl;
    return 0;
  } else {
    for (int i = 0; i < S.length(); i++) {
      if (isupper(S[i])) {
        ac++;
      }
    }
  }
  if (ac == 2) {
    cout << "AC" << endl;
    return 0;
  } else {
    cout << "WA" << endl;
    return 0;
  }
}