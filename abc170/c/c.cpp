#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, N, p;
  cin >> X >> N;

  vector<int> v;
  bool existX = false;
  for(int i = 0; i < N; i++) {
    cin >> p;
    v.push_back(p);
    if(p == X) existX = true;
  }

  if(existX == false) {
    cout << X << endl;
    return 0;
  }


  for(int i = 1; i <= 100; i++){
    auto result1 = find(v.begin(), v.end(), X - i);
    if (result1 == v.end()) {
      cout << X - i << endl;
      return 0;
    }
    auto result2 = find(v.begin(), v.end(), X + i);
    if (result2 == v.end()) {
      cout << X + i << endl;
      return 0;
    }
  }
}