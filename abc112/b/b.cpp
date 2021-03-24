#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, T;
  cin >> N >> T;

  int c, t;
  int cost = 1001;
  for(int i = 0; i < N; i++) {
    cin >> c >> t;
    if(T >= t) {
      if(cost > c) {
        cost = c;
      }
    }
  }

  if(cost < 1001) {
    cout << cost << endl;
  } else {
    cout << "TLE" << endl;
  }
}