#include <bits/stdc++.h>
using namespace std;

string half[2];

int main(){
  int64_t n;
  string s;
  cin >> n >> s;

  int fr = 0;
  int sc = 1;

  half[fr] = s.substr(0, n);
  half[sc] = s.substr(n);

  int64_t q;
  cin >> q;

  int64_t t, a, b;
  for(int64_t i = 0; i < q; i++){
    cin >> t >> a >> b;
    a--;
    b--;

    if(t == 1){
      char ca, cb;
      if(a < n){
        ca = half[fr][a];
      } else {
        ca = half[sc][a-n];
      }
      if(b < n){
        cb = half[fr][b];
      } else {
        cb = half[sc][b-n];
      }

      if(a < n){
        half[fr][a] = cb;
      } else {
        half[sc][a-n] = cb;
      }
      if(b < n){
        half[fr][b] = ca;
      } else {
        half[sc][b-n] = ca;
      }
    } else if(t == 2) {
      int escape = fr;
      fr = sc;
      sc = escape;
    }
  }
  cout << half[fr] + half[sc] << endl;
}