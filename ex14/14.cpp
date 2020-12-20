#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int min_1 = min(A, B);
  int min_2 = min(min_1, C);

  int max_1 = max(A, B);
  int max_2 = max(max_1, C);
  cout << max_2 - min_2 << endl;
}
