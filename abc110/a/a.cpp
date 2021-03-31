#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  int ans = max(max(A, B), C) * 10 + A + B + C - max(max(A, B), C);
  cout << ans << endl;
  return 0;
}