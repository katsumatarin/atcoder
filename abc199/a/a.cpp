#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int a2 = a * a;
  int b2 = b * b;
  int c2 = c * c;

  if(a2 + b2 < c2){
    cout << "Yes" << endl;
  } else {
    cout <<"No" << endl;
  }
}