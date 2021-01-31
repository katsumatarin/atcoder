#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  int takahashiHP = A;
  int aokiHP = C;
  while(true) {
    aokiHP -= B;
    if (aokiHP <= 0) {
      cout << "Yes" << endl;
      return 0;
    }
    takahashiHP -= D;
    if (takahashiHP <= 0) {
      cout << "No" << endl;
      return 0;
    }
  }
}