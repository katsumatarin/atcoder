#include <bits/stdc++.h>
using namespace std;

int main() {
  char X, Y;
  cin >> X >> Y;
  int x, y;
  if(X == 'A') {
    x = 1;
  } else if (X == 'B') {
    x = 2;
  } else if (X == 'C') {
    x = 3;
  } else if (X == 'D') {
    x = 4;
  } else if (X == 'E') {
    x = 5;
  } else if (X == 'F') {
    x = 6;
  }

  if(Y == 'A') {
    y = 1;
  } else if (Y == 'B') {
    y = 2;
  } else if (Y == 'C') {
    y = 3;
  } else if (Y == 'D') {
    y = 4;
  } else if (Y == 'E') {
    y = 5;
  } else if (Y == 'F') {
    y = 6;
  }

  if(x > y) {
    cout << ">" << endl;
  } else if(x < y) {
    cout << "<" << endl;
  } else {
    cout << "=" << endl;
  }

}