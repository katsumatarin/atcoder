#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  int a;
  int ans = 0;
  bool satisfactory = false;

  int satisfiedNum = 1;
  for(int i = 0; i < N; i++) {
    cin >> a;
    if(satisfiedNum != a) {
      ans++;
    } else {
      satisfactory = true;
      satisfiedNum++;
    }
  }

  if(satisfactory == true) {
    cout << ans << endl;
    return 0;
  } else {
    cout << -1 << endl;
    return 0;
  }

}