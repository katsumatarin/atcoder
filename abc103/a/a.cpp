#include <bits/stdc++.h>
using namespace std;

int main(){
  int A;
  vector<int> vec;

  int i = 0;
  while(i < 3){
    cin >> A;
    vec.push_back(A);
    i++;
  }
  sort(vec.begin(), vec.end());

  int ans;
  ans += vec[1] - vec[0];
  ans += vec[2] - vec[1];

  cout << ans << endl;
}