#include <bits/stdc++.h>
using namespace std;

bool isGumojiretsu(string input){
  int len = input.length();
  int lenHalf = len / 2;
  if (len % 2 == 1) {
    return false;
  }
  for (int i; i < lenHalf; i++) {
    if (input[i] != input[i + lenHalf]) {
      return false;
    }
  }
  return true;
}

int main() {
  string S;
  cin >> S;
  for (int i = S.length()-1; i >= 0; i--) {
    S.erase(i);
    bool Gumojiretsu = isGumojiretsu(S);
    if (Gumojiretsu == true) {
      cout << S.length() << endl;
      return 0;
    }
  }
}