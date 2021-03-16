#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t K, S;
  cin >> K >> S;

  int64_t cnt = 0;
  for(int64_t i = 0; i <= K; i++) {
    for(int64_t j = 0; j <= K; j++) {
      int k = S - i - j;
      if(0 <= k && k <= K) {
        cnt++;
      }
    }
  }

  cout << cnt << endl;
}