#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  string first = s.substr(0, 4);
  string second = s.substr(4);
  cout << first + " " + second << endl;
}
