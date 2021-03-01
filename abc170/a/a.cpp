#include <bits/stdc++.h>
using namespace std;

int main() {
  int x = 0, i = 1;
  while(i < 6) {
    cin >> x;
    if(x == 0) {
      cout << i << endl;
      return 0;
    }
    i++;
  }
}