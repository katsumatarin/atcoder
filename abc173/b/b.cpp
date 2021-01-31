#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  int ac = 0, wa = 0, tle = 0, re = 0;
  for(int i = 0; i < N; i++) {
    cin >> S;
    if(S == "AC") {
      ac++;
    } else if(S == "WA") {
      wa++;
    } else if(S == "TLE") {
      tle++;
    } else if(S == "RE") {
      re++;
    }
  }
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
}