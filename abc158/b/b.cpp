#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int over = 0;
  int blue = 0;
  if(N <= A) {
    cout << N << endl;
    return 0;
  } else if(N <= A + B) {
    cout << A << endl;
    return 0;
  } else {
    over = N % (A + B);
    for(int i = 0; i < over; i++) {
      blue += A;
    }
    if(over > A) {
      blue += A;
    } else {
      blue += over;
    }
  }
  cout << blue << endl;
  return 0;
}