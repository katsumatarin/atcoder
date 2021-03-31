#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  int origin = A * B;
  int road = (A+B-1);
  int ans = origin - road;
  cout << ans << endl;
  return 0;
}