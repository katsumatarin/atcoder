#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a;
  for (int i = 0; i < N; i++) {
    int addA;
    cin >> addA;
    a.push_back(addA);
  }
  int num = 1;
  int cnt;
  for (int i = 0; i < N; i++) {
    num = a[num-1];
    cnt++;
    if (num == 2) {
      cout << cnt << endl;
      return 0;
    }
  }
  cout << "-1" << endl;
}