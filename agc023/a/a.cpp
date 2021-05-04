#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a;
  vector<int> b;
  b.push_back(0);

  int A;
  for(int i = 0; i < n; i++){
    cin >> A;
    a.push_back(A);
  }

  for(int i = 1; i < n+1; i++){
    b.push_back(a[i-1] + b[i-1]);
  }

  sort(b.begin(), b.end());

  int sum = 1, ans = 0;
  for(int i = 0; i < b.size(); i++){
    if(b[i] == b[i+1]){
      sum++;
    } else {
      if(sum >= 2){
        ans += sum * (sum-1) / 2;
        sum = 1;
      }
    }
  }

  cout << ans << endl;
}