#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  int ans = 0;
  if(B / A >= C) ans = C;
  else ans = B / A;
  cout << ans << endl;
  return 0;
}