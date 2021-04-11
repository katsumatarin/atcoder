#include <bits/stdc++.h>
using namespace std;

int main(){
  int r, x, y;
  cin >> r >> x >> y;

  int distance = sqrt(pow((x - 0), 2) + pow((y - 0), 2));

  int ans = 0;
  if(distance % r == 0){
    ans = distance / r;
  }else{
    ans = distance / r + 1;
  }

  cout << ans << endl;
}