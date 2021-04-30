#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int x = 111 * (n / 100);
  if(n > x){
    cout << x+111 << endl;
  } else {
    cout << x << endl;
  }
}