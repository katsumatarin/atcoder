#include <bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin >> str;

  bool n = false, w = false, s = false, e = false;
  for(int i = 0; i < str.size(); i++){
    if(str[i] == 'N') n = true;
    else if(str[i] == 'W') w = true;
    else if(str[i] == 'S') s = true;
    else if(str[i] == 'E') e = true;
  }

  if(n == s){
    if(w == e){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}