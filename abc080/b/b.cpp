#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int sum = 0;
  int X = N;
  while(N > 0) {
    sum += N % 10;
    N /= 10;
  }
  if(X % sum == 0) {
    cout << "Yes" << endl;
    return 0;
  }
  else {
    cout << "No" << endl;
    return 0;
  }
}