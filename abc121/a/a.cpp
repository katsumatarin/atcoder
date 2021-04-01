#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W, h, w;
  cin >> H >> W >> h >> w;

  int count = 0;

  for(int i = 0; i < H - h; i++) {
    for(int j = 0; j < W - w; j++) {
      count++;
    }
  }
  cout << count << endl;
}