#include <bits/stdc++.h>
using namespace std;

int main(){
  int ans = 0;
  int A, B;
  cin >> A >> B;
  ans += min(A, B);
  int C, D;
  cin >> C >> D;
  ans += min(C, D);

  cout << ans << endl;
}