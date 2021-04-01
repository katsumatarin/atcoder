#include <bits/stdc++.h>
using namespace std;

int main(){
  int K;
  cin >> K;
  int ans = 0;
  for(int i = 1; i < K; i++) {
    for(int j = i+1; j < K+1; j++) {
      if((i + j) % 2 != 0) {
        ans++;
      } else {
      }
    }
  }
  cout << ans << endl;
}