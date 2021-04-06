#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  string A, B, C;
  cin >> N >> A >> B >> C;

  int ans = 0;
  for(int i = 0; i < N; i++) {
    if(A[i] == B[i] && B[i] == C[i]){
    }
    else if(A[i] == B[i] || B[i] == C[i] || C[i] == A[i]) {
      ans++;
    } else if(A[i] != B[i] && B[i] != C[i]) {
      ans += 2;
    }
  }

  cout << ans << endl;
}