#include <bits/stdc++.h>
using namespace std;

int main(){
  int alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  int N;
  string S;
  cin >> N >> S;
  char c;
  int order;
  string ans_string;
  for(int i = 0; i < S.length(); i++) {
    c = S[i];
    order = c - 'A' + 1 + N;
    if(order > 26) {
      order -= 26;
    }
    ans_string += alphabet[order - 1];
  }

  cout << ans_string << endl;
}