#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  string s;
  cin >> n >> s;
  int r, b;
  for(int i = 0; i < n; i++){
    if(s[i] == 'R') r++;
    else b++;
  }
  if(r > b) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}