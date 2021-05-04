#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin >> n;
  vector<long long> a;
  vector<long long> b;
  b.push_back(0);

  long long A;
  for(long long i = 0; i < n; i++){
    cin >> A;
    a.push_back(A);
  }

  for(long long i = 1; i < n+1; i++){
    b.push_back(a[i-1] + b[i-1]);
  }

  sort(b.begin(), b.end());

  long long sum = 1, ans = 0;
  for(long long i = 0; i < (long long)(b.size()) - 1; i++){
    if(b[i] == b[i+1]){
      sum++;
    } else {
      if(sum >= 2){
        ans += sum * (sum-1) / 2;
        sum = 1;
      }
    }
  }

  ans += sum * (sum-1) / 2;

  cout << ans << endl;
}