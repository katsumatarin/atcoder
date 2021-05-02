#include <bits/stdc++.h>
using namespace std;

int main(){
  double N, D, H;
  cin >> N >> D >> H;

  double ans = 0, d, h;

  for(int i = 0; i < N; i++){
    cin >> d >> h;

    double res = H - (H-h) / (D - d) * D;
    ans = max(res, ans);
  }

  cout << ans << endl;
}