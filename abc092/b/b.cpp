#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int d, x;
  cin >> d >> x;

  int a, ans = x;
  for(int i = 0; i < n; i++){
    cin >> a;

    int cnt = 1, days = 1;
    while(true){
      days += a;
      if(days <= d) {
        cnt++;
      } else {
        ans += cnt;
        break;
      }
    }

  }

  cout << ans << endl;
}