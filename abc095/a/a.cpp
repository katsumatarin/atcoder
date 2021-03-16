#include <bits/stdc++.h>
using namespace std;

int main(){
  int ramen_price = 700;
  string S;
  cin >> S;

  for(int i = 0; i < 3; i++){
    if(S[i] == 'o') {
      ramen_price += 100;
    }
  }

  cout << ramen_price << endl;
}