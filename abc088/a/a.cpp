#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A;
  cin >> N >> A;

  int gohyaku_cnt = N / 500;
  N -= gohyaku_cnt * 500;

  if(N <= A) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}