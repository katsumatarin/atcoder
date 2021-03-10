#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int oooo = N / 1000 * 1000;
  int ooo = (N - oooo) / 100 * 100;
  int oo = (N - oooo - ooo) / 10 * 10;
  int o = N - oooo - ooo - oo;

  if(oooo / 1000 == ooo / 100 && ooo / 100 == oo / 10 || ooo / 100 == oo / 10 && oo / 10 == o ) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}