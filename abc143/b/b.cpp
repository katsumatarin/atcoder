#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;

  vector<int> vec;
  for(int i = 0; i < n; i++){
    int d;
    cin >> d;
    vec.push_back(d);
  }

  int size = vec.size(), sum = 0;
  for(int i = 0; i < size-1; i++){
    for(int j = 1; j < size-i; j++){
      sum += vec[0] * vec[j];
    }
    vec.erase(vec.begin(), vec.begin()+1);
  }
  cout << sum << endl;
  return 0;
}