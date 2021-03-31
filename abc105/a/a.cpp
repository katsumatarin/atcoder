#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  int ans;
  if(N%K!=0) ans = 1;
  else ans = 0;
  cout << ans << endl;
}