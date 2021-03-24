#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  int p, cnt = 0;
  for(int i = 1; i <= N; i++) {
    cin >> p;
    if(p != i) {
      cnt++;
    }
    if(cnt > 2) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
  return 0;
}