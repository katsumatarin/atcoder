#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a;
  vector<int> vec;
  for(int i = 0; i < n; i++){
    cin >> a;
    vec.push_back(a);
  }
  int before = vec.size();
  sort(vec.begin(), vec.end());
  vec.erase(unique(vec.begin(), vec.end()), vec.end());
  int after = vec.size();

  if(before == after){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}