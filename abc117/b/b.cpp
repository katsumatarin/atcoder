#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  vector<int> v;
  int a;
  for(int i = 0; i < n; i++){
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  int max = v[v.size()-1], sum = 0;
  for(int i = 0; i < (int)v.size() - 1; i++){
    sum += v[i];
  }

  if(sum > max) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}