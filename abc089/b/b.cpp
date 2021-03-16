#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  char c;
  for(int i = 0; i < N; i++) {
    cin >> c;
    if(c == 'Y') {
      cout << "Four" << endl;
      return 0;
    }
  }

  cout << "Three" << endl;
}