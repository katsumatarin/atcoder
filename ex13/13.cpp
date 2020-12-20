#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, i;
  cin >> N;
  vector <int> vec(N);

  for (i = 0; i < N; i++) {
    cin >> vec.at(i);
  }

  int w = 0;

  for (i = 0; i < N; i++) {
    w += vec.at(i);
  }

  int a = w / N;

  for (i = 0; i < N; i++) {
    cout << std::abs( a - vec.at(i) ) << endl;
  }
}
