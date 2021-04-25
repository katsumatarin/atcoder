#include <bits/stdc++.h>
using namespace std;

  char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(){
  int h, w;
  cin >> h >> w;
  string s, ans;
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      cin >> s;
      if(s == "snuke"){
        cout << alphabet[j] + to_string(i+1) << endl;
        return 0;
      }
    }
  }
}