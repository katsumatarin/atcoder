#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;
  int ta = 0, ka = 0;
  for(int tsuru = 0; tsuru < X + 1; tsuru++) {
    int kame = X - tsuru;
    ta = tsuru * 2;
    ka = kame * 4;
    if(ta + ka == Y) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}