#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;

  int l, r;
  cin >> l >> r;
  int l_max =l, r_min = r;
  for(int i = 0; i < n - 1; i++){
    cin >> l >> r;
    if(l > l_max){
      l_max  = l;
    }
    if(r < r_min){
      r_min  = r;
    }
  }

  int ans;
  if(l_max <= r_min){
    ans = r_min - l_max + 1;
  }else{
    ans = 0;
  }

  cout << ans << endl;
}