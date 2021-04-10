#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a, b;
  cin >> a >> b;
  int lrank = a;
  int lscore = b;
  for(int i = 0; i < n-1; i++){
    cin >> a >> b;
    if(lrank < a){
      lrank = a;
      lscore = b;
    }
  }
  int ans = lrank + lscore;
  cout << ans << endl;
}