#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  int x, y, z;
  x = A + B;
  y = A - B;
  z = A * B;

  int ans = max(max(x, y), z);
  cout << ans << endl;
}