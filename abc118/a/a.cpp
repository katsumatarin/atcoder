#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  if(B%A==0) cout << A+B << endl;
  if(B%A!=0) cout << B-A << endl;
  return 0;
}