#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  string s;
  cin >> s;
  string ans;
  for(int i = 0; i < s.length(); i++){
    if(s[s.length()-1-i] == '9') ans += '6';
    else if (s[s.length()-1-i] == '6') ans += '9';
    else ans += s[s.length()-1-i];
  }
  cout << ans << endl;
  return 0;
}