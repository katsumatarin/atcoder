#include <bits/stdc++.h>
using namespace std;

int main(){
  string sample = "CODEFESTIVAL2016";
  int len = sample.length();

  string S;
  cin >> S;

  int ans = 0;
  for(int i = 0; i < len; i++) {
    if(sample[i] != S[i]) {
      ans++;
    }
  }

  cout << ans << endl;
}