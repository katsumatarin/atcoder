#include <bits/stdc++.h>
using namespace std;

int main(){
  float A, B;
  cin >> A >> B;
  float ans = 0;
  ans = 100 - (B / A * 100);
  cout << ans << endl;
}