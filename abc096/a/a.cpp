#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  int ans = (a - 1);
  if(a - b <= 0) {
    ans += 1;
  }
  cout << ans << endl;
}