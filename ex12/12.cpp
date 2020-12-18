#include <bits/stdc++.h>
using namespace std;

int main() {
  int x = 1;
  int i;
  string S;
  cin >> S;

  for (i = 0; i < S.size(); i ++) {
    if (S.at(i) == '+') {
      x++;
    } else if (S.at(i) == '-'){
      x--;
    }
  }

  cout << x << endl;

}
