#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;

  bool check = true;

  vector<char> vec = {'A','K','I','H','A','B','A','R','A'};

  if(s.length() < 5 || s.length() > 9) {
    check = false;
  } else {
    for(int i = 0; i < vec.size(); i++){
      if(s[i] != vec[i]){
        if(vec[i] != 'A') {
          check = false;
          break;
        } else {
          s.insert(i, "A");
        }
      }
    }
  }

  if(s == "AKIHABARA"){
    check = true;
  }

  if(check == true){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}