#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int gcd = 0, ans = -1;
  for(int i = 2; i <= 1000; i++){
    int cnt = 0;
    for(int j = 0; j < n; j++) if(a[j] % i == 0) cnt++;
    if(gcd < cnt) gcd = cnt, ans = i;
  }

  cout << ans << endl;

}