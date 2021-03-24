#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M, T;
  cin >> N >> M >> T;
  int A, B;
  int nowN = N, nowTime = 0;

  for(int i = 0 ; i < M; i++) {
    cin >> A >> B;
    nowN -= A - nowTime;

    if(nowN <= 0) {
      cout << "No" << endl;
      return 0;
    }

    if(nowN + (B - A) > N) {
      nowN = N;
    } else {
      nowN += B - A;
    }
    nowTime = B;

  }
  nowN -= T - nowTime;

  if(nowN > 0) {
    cout << "Yes" << endl;
    return 0;
  } else {
    cout << "No" << endl;
    return 0;
  }
}