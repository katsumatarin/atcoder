#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  int ss = S.size();
  int ts = T.size();
  int difference = ss - ts;
  int ans = ts;
  for(int i = 0; i < difference + 1; i++) {
    int cnt = 0;
    string extractedS = S.substr(i, ts);
    for(int j = 0; j < ts; j++) {
      if(extractedS[j] == T[j]) {
        cnt++;
      }
    }
    if(ans > ts - cnt){
      ans = ts - cnt;
    }
  }
  cout << ans << endl;
}