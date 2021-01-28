#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector <pair<int, int>> vec;
  int a, b;
  for (int i = 0; i < N; i++) {
    cin >> a >> b;
    vec.push_back(make_pair(b, a));
  }

  sort(vec.begin(), vec.end());

  for (pair<int, int > t : vec) {
    int x, y;
    tie (y, x) = t;
    cout << x << " " << y << endl;
  }
}