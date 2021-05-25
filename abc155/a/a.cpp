#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int A, B, C;
   cin >> A >> B >> C;
   bool b = false;
   if(A == B) if(A != C) b = true;
   if(B == C) if(B != A) b = true;
   if(C == A) if(C != B) b = true;

   if(b == true) cout << "Yes" << endl;
   else cout << "No" << endl;
  return 0;
}