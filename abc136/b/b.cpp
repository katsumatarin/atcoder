#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int div = 10, ans = 0;
  for(int i = 1; i <= N; i++) {
    if(i % div == 0) {
      i = i * 10 - 1;
      div *= 100;
    } else {
      ans++;
    }
  }
  cout << ans << endl;
}