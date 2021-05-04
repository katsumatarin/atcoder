#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<double> vec;
  double v;
  for(int i = 0; i < n; i++){
    cin >> v;
    vec.push_back(v);
  }


  for(int i = 0; i < n-1; i++){
    sort(vec.begin(), vec.end());
    double value = (vec[0] + vec[1]) / 2;
    vec.erase(vec.begin(), vec.begin()+2);
    vec.push_back(value);
  }

  cout << vec[0] << endl;
}