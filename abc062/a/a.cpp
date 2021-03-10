#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  if(x == 2) {
    x = 3;
  } else if(x == 4 || x == 6 || x == 9 || x == 11) {
    x = 2;
  } else if(x == 1 || x == 3 || x == 5 || x == 7 || x == 9 || x == 11) {
    x = 1;
  }
  if(y == 2) {
    y = 3;
  } else if(y == 4 || y == 6 || y == 9 || y == 11) {
    y = 2;
  } else if(x == 1 || x == 3 || x == 5 || x == 7 || x == 9 || x == 11) {
    y = 1;
  }


  if(x == y) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}