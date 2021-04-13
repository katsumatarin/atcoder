#include <bits/stdc++.h>
using namespace std;

int main(){
  int X;
  cin >> X;
  int ans = 1;

  for(int b = 1; b < X; b++){
    for(int p = 2;; p++){
      if(X < pow(b, p)){
        ans = max(ans, pow(b, p-1));
        break;
      }
    }
  }

  for(int i = 1;;i++){
    if(X < pow(i, 2)){
      ans = pow(i-1, 2);
      break;
    }
  }
  cout << ans << endl;
}