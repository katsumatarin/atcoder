#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, N;
  cin >> X >> N;
  vector<int> small;
  vector<int> big;
  bool existX = false;
  int p;
  for(int i = 0; i < N; i++) {
    cin >> p;
    if(p < X) {
      small.push_back(p);
    } else if(p > X) {
      big.push_back(p);
    } else if(p == X) {
      existX = true;
    }
  }

  if(existX == false) {
    cout << X << endl;
  }

}