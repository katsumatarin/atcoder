#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (count(s.begin(), s.end(), '0') == 0) cout << "3" << endl;
  else if (count(s.begin(), s.end(), '0') == 1) cout << "2" << endl;
  else if (count(s.begin(), s.end(), '0') == 2) cout << "1" << endl;
  else cout << "0" << endl;
}