#include <bits/stdc++.h>
using namespace std;

int main(){
  string a, b;
  cin >> a >> b;
  string S = a+b;
  int num = stoi(S);

  for(int i = 1; i <= num; i++) {
    if(i * i == num) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}