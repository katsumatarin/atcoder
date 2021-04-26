#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;

  int l = s.size();
  for(int i = 0; i < l - 1; i++){
    if(s[i] == 'A'){
      if(s[i+1] == 'C'){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}