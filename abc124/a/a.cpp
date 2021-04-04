#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;

  int ans = max(A, B);
  if(ans == A) A -= 1;
  else if(ans == B) B -= 1;

  ans += max(A, B);

  cout << ans << endl;
}