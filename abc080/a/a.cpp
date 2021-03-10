#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  A = N * A;
  if(A > B) {
    cout << B << endl;
  } else {
    cout << A << endl;
  }
}