#include <bits/stdc++.h>
using namespace std;

int main(){
  int h, w;
  cin >> h >> w;

  string s;
  vector<string> v;
  int cnt = 0;
  for(int i = 0; i < h; i++){
    cin >> s;
    v.push_back(s);
    for(int j = 0; j < w-1; j++){
      if(s[j] == '.' && s[j+1] == '.'){
        cnt++;
      }
    }
  }

  for(int i = 0; i < h-1; i++){
    for(int j = 0; j < w; j++){
      if(v[i][j] == '.' && v[i+1][j] == '.'){
        cnt++;
      }
    }
  }
  cout << cnt << endl;
}