#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if(max(a, c) - min(a, c) <= d){
    cout << "Yes" << endl;
    return 0;
  } else if(max(a, b) - min(a, b) <= d && max(b, c) - min(b, c) <= d) {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
}