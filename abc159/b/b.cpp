#include <bits/stdc++.h>
using namespace std;

bool PalindromeCheck(string input) {
  int len = input.length();
  for(int i = 0; i < len / 2; i++) {
    if(input[i] != input[len-1-i]) {
      return false;
    }
  }
  return true;
}

int main(){
  string S;
  cin >> S;
  int len = S.length();

  bool rule1 = PalindromeCheck(S);
  if(rule1 == false) {
    cout << "No" << endl;
    return 0;
  }

  bool rule2 = PalindromeCheck(S.substr(0, (len-1)/2));
  if(rule2 == false) {
    cout << "No" << endl;
    return 0;
  }

  bool rule3 = PalindromeCheck(S.substr((len+3)/2-1, len));
  if(rule3 == false) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
}