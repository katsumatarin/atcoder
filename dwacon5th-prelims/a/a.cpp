#include <bits/stdc++.h>
using namespace std;

int main(){
  double N;
  cin >> N;
  int a;
  double sum = 0;
  vector<int> vec;
  for(int i = 0; i < N; i++){
    cin >> a;
    sum += a;
    vec.push_back(a);
  }

  int ans = 0, min = 1e9;
  for(int i = 0; i < N; i++){
    int tmp = abs(vec[i]*N - sum);
    if(min > tmp){
      min = tmp;
      ans = i;
    }
  }
  cout << ans << endl;
}