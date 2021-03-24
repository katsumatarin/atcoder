#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  int ans = 0;

  ans = B * 2;
  C -= ans / 2;
  if(C > A)   ans += A + 1;
  else ans += C;

  cout << ans << endl;
}