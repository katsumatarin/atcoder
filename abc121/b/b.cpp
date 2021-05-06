#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n, m, c;
  cin >> n >> m >> c;

  vector<int> vec;
  for(int i = 0; i < m; i++){
    int b;
    cin >> b;
    vec.push_back(b);
  }

  int ans = 0;
  for(int i = 0; i < n; i++){
    int cnt = c;
    for(int j = 0; j < m; j++){
      int a;
      cin >> a;
      cnt += a * vec[j];
    }
    if(cnt > 0) ans++;
  }

  cout << ans << endl;
  return 0;
}