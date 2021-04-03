#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int x = 753, ans = 10000;
  int size = S.size();
  for(int i = 0; i < size - 2; i++) {
    int num = stoi(S.substr(i, 3));
    int diff = max(x, num) - min(x, num);
    if(ans > diff) {
      ans = diff;
    }
  }
  cout << ans << endl;
}