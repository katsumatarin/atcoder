#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int h, a;
  cin >> h >> a;
  int count = 0;
  while(h > 0){
    h -= a;
    count++;
  }
  cout << count << endl;
  return 0;
}