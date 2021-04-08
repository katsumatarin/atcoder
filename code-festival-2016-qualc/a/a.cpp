#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;

  bool f = false;
  int position = 0;
  string ans = "No";

  for(int i = 0; i < s.length(); i++) {
    if(s[i] == 'C') {
      f = true;
      position = i;
    }
  }

  if(f == true) {
    for(int i = position + 1; i < s.length(); i++) {
      if(s[i] == 'F') {
          ans = "Yes";
      }
    }
  }
  cout << ans << endl;
}