#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  string s;
  vector<string> vec;
  for(int i = 0; i < H; i++){
    cin >> s;
    vec.push_back(s);
    vec.push_back(s);
  }

  int size = vec.size();
  for(int i = 0; i < size; i++){
    cout << vec[i] << endl;
  }
}