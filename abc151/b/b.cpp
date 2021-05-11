#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n, k, m;
  cin >> n >> k >> m;
  int sum = n * m;
  for(int i = 0; i < n-1; i++){
    int a;
    cin >> a;
    sum -= a;
  }
  if (sum < 0) sum = 0;
  if (sum > k) sum = -1;
  cout << sum << endl;
  return 0;
}