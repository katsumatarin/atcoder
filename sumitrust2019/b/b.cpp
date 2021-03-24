#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  for(int i = N; i > 0; i--) {
    if(i * 1.08 - N < 1 && i * 1.08 - N >= 0) {
      cout << i << endl;
      return 0;
    }
  }
  cout << ":(" << endl;
}