#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  string str;
  for(int i = 1; i < n+1; i++) {
    if(s[i] != s[i-1]){
      str+=s[i];
    }
  }
  int ans = str.length();
  cout << ans << endl;
}