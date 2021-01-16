#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  vector<char> alphabet{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  vector<char> S_alphabet[S.length()];


  for (int i = 0; i < alphabet.size(); i++){
    int cnt = 0; // alphabet[i]が文字列に登場した回数
    for (int j = 0; j < S.length(); j++){
      if (alphabet[i] == S[j]) {
        cnt++;
      }
    }
    if (cnt == 0) {
      cout << alphabet[i] << endl;
      return(0);
    }
  }
  cout << "None" << endl;
}