#include <bits/stdc++.h>
using namespace std;

int main(){
  int X;
  cin >> X;

  int A;
  cin >> A;
  X -= A;

  int B;
  cin >> B;

  X -= B * (X / B);

  cout << X << endl;
}