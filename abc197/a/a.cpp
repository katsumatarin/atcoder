#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  string ans = S.substr(1) + S[0];
  cout << ans << endl;
}