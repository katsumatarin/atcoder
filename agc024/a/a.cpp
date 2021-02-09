#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, K;
  cin >> A >> B >> C >> K;
  int nA = 0, nB = 0, nC = 0;
  for (int i = 0; i < K; i++) {
    nA = B + C;
    nB = A + C;
    nC = A + B;
    A = nA;
    B = nB;
    C = nC;
  }
  cout << A - B << endl;
}