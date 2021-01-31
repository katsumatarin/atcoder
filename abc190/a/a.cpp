#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  if (C == 0) {
    while(true) {
      if (A != 0) {
        A--;
      } else {
        cout << "Aoki" << endl;
        return 0;
      }
      if (B != 0) {
        B--;
      } else {
        cout << "Takahashi" << endl;
        return 0;
      }
    }
  } else if (C == 1) {
      while (true) {
        if (B != 0) {
          B--;
        } else {
          cout << "Takahashi" << endl;
          return 0;
        }
        if (A != 0) {
          A--;
        } else {
          cout << "Aoki" << endl;
          return 0;
        }
      }
    }
  }
  // if (A == B) {
  //   if (C == 0) { //高橋くん先手
  //     cout << "Aoki" << endl;
  //   } else { //青木くん先手
  //     cout << "Takahashi" << endl;
  //   }
  // }
  // if (A - B == 1) {
  //   if (C == 0) { //高橋くん先手
  //     cout << "Takahashi" << endl;
  //   } else { //青木くん先手
  //     cout << "Aoki" << endl;
  //   }
  // }
  // if (B - A == 1) {
  //   if (C == 0) { //高橋くん先手
  //     cout << "Aoki" << endl;
  //   } else { //青木くん先手
  //     cout << "Takahashi" << endl;
  //   }
  // }
  // if (A - B > 1) {
  //   cout << "Takahashi" << endl;
  // }
  // if (B - A > 1) {
  //   cout << "Aoki" << endl;
  // }
  //}