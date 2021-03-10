#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int ans = A + B;
  if(ans < 10) {
    cout << ans << endl;
    return 0;
  } else {
    cout << "error" << endl;
    return 0;
  }
}