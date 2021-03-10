#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int h = N / 100 * 100;
  int j = (N - h) / 10 * 10;
  int i = N - h - j;
  if(h / 100 == i) {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
}