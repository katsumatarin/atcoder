#include <bits/stdc++.h>
using namespace std;

int main() {
  string C1;
  cin >> C1;
  string C2;
  cin >> C2;
  if(C1[0] == C2[2] && C2[0] == C1[2] && C1[1] == C2[1]) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}