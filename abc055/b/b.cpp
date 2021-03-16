#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t MOD = 1000000007;
  int64_t N;
  cin >> N;

  int64_t num = 1, ans = 0;
  for(int64_t i = 1; i <= N; i++) {
    num *= i;
    ans = num % MOD;
  }
  cout << ans << endl;
}