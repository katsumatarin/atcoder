#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, X;
  cin >> A >> B >> X;
  if(A < X) {
    if(A + B >= X) {
      cout << "YES" << endl;
      return 0;
    }
  } else if(A == X) {
    cout << "YES" << endl;
    return 0;
  }
  cout << "NO" << endl;
}