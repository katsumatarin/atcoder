#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C, K;
  cin >> A >> B >> C >> K;
  int patternA, patternB, patternC, ans;
  for(int i = 0; i < K; i++) {
    patternA = A * 2 + B + C;
    patternB = A + B * 2 + C;
    patternC = A + B + C * 2;
    ans = max(max(patternA, patternB), patternC);

    if(ans == patternA) A *= 2;
    else if(ans == patternB) B *= 2;
    else C *= 2;
  }

  cout << ans << endl;
}