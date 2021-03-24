#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec;

  int a;
  for(int i = 0; i < N; i++) {
    cin >> a;
    vec.push_back(a);
  }

  int ans = 0;
  for(int i = 1; i < N; i++) {
    if(vec[i] == vec[i-1]) {
      vec[i] = 10000;
      ans++;
    }
  }

  cout << ans << endl;
}