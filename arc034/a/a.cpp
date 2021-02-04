#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int a, b, c, d, e;
  int e1 = 110, e2 = 900;
  float ans = 0, sum = 0, eSum = 0;
  for (int i = 0; i < N; i++) {
    cin >> a >> b >> c >> d >> e;
    eSum = (float)e * e1 / e2;
    cout << fixed << setprecision(10);
    sum = a + b + c + d + eSum;
    if (ans < sum) {
      ans = sum;
    }
  }
  cout << ans << endl;
}