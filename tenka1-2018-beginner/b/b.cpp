#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, K;
  cin >> A >> B >> K;
  bool takahashi = true;
  for(int i = 0; i < K; i++) {
    if(takahashi == true) {
      if(A % 2 != 0) {
        A--;
      }
      B += A / 2;
      A /= 2;
      takahashi = false;
    } else {
      if(B % 2 != 0) {
        B--;
      }
      A += B / 2;
      B /= 2;
      takahashi = true;
    }
  }
  cout << A << " " << B << endl;
}