#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n, a, b;
  cin >> n;
  vector<int> a_vec, b_vec;
  for(int i = 0; i < n; i++){
    cin >> a;
    a_vec.push_back(a);
  }
  for(int i = 0; i < n; i++){
    cin >> b;
    b_vec.push_back(b);
  }

  int sum = 0;
  for(int i = 0; i < n; i++){
    sum += a_vec[i] * b_vec[i];
  }

  if(sum == 0) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}