#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int max = 0, p, ans = 0;
  for(int i = 0; i < N; i++){
    cin >> p;
    ans += p;
    if(max < p) {
      max = p;
    }
  }
  ans -= max / 2;
  cout << ans << endl;
}