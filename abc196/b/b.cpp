#include <bits/stdc++.h>
using namespace std;

int main(){
  string X;
  cin >> X;

  string ans = X;

  int len = X.length();
  for(int i = 0; i < len; i++) {
    if(ans[i] == '.') {
      ans.erase(i);
    }
  }
  cout << ans << endl;
}