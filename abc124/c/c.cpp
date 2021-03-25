#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int count = 0;
  for (int i = 1; i < S.length(); i++) {
    if (S[i] == S[i-1]) {
      count++;
      if (S[i] == '1') {
        S[i] = '0';
      } else {
        S[i] = '1';
      }
    }
  }
  cout << count << endl;
}