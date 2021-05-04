#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  int d;
  vector<int> vec;
  for(int i = 0; i < n; i++){
    cin >> d;
    vec.push_back(d);
  }
  sort(vec.begin(), vec.end());

  cout << vec[n/2] - vec[n/2-1] << endl;
}