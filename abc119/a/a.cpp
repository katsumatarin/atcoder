#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int a = S[5] - '0';
  int b = S[6] - '0';

  if(a == 0 && b < 5) {
    cout << "Heisei" << endl;
  } else {
    cout << "TBD" << endl;
  }
}