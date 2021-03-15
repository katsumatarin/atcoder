#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  int m;
  vector<int> vec;
  int cnt = N, sum = 0;
  for(int i = 0; i < N; i++) {
    cin >> m;
    vec.push_back(m);
    sum += m;
  }

  X -= sum;

  sort(vec.begin(),  vec.end());

  while(X > vec[0]) {
    X -= vec[0];
    cnt++;
  }

  cout << cnt << endl;
}