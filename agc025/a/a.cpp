#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int EachSum(int a, int b){
  int sum = 0;
  while(a > 0){
    sum += a % 10;
    a /= 10;
  }
  while(b > 0){
    sum += b % 10;
    b /= 10;
  }
  return sum;
}

int main(){
  int n;
  cin >> n;

  int ans = EachSum(1, n-1);
  for(int i = 1; i < n/2+1; i++){
    int a = i, b = n -i;
    int sum = EachSum(a, b);
    ans = min(ans, sum);
  }

  cout << ans << endl;
  return 0;
}