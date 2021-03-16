#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N;
  cin >> N;

  set<int64_t> ans;
  for(int64_t i = 1; i*i <= N; i++) {
    if(N % i == 0) {
      ans.insert(i);
      ans.insert(N/i);
    }
  }

  for(auto x:ans)cout << x << endl;
}