#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int k, x;
  cin >> k >> x;
  int min = x - k + 1, max = x + k - 1;
  for(int i = min; i < max; i++) cout << i << " ";
  cout << max << endl;
  return 0;
}