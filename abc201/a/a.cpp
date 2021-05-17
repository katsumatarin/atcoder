#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> v = {a, b, c};
  sort(v.begin(), v.end());
  if((v[1] - v[0]) == (v[2] - v[1])) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}