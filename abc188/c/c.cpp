#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;

  pair<int, int> fr_max, sc_max;
  for(int i = 0; i < pow(2, n); i++){
    int a;
    cin >> a;
    if(i < pow(2, n) / 2){
      if(a > fr_max.first) fr_max.first = a, fr_max.second = i;
    } else {
      if(a > sc_max.first) sc_max.first = a, sc_max.second = i;
    }
  }

  if(fr_max.first < sc_max.first) cout << fr_max.second+1 << endl;
  else cout << sc_max.second+1 << endl;
  return 0;
}