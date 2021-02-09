#include <bits/stdc++.h>
using namespace std;

int main() {
  int V, T, S, D;
  cin >> V >> T >> S >> D;
  int minDis = V * T;
  int maxDis = V * S;
  if (minDis <= D && D <= maxDis) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}