#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t n;
  string s;
  cin >> n >> s;
  string first = s.substr(0, n);
  string second = s.substr(n);

  int64_t q;
  cin >> q;

  int64_t t, a, b;
  for(int64_t i = 0; i < q; i++){
    cin >> t >> a >> b;

    if(t == 1){
      char ca, cb;
      if(a <= n){
        ca = first[a-1];
      } else {
        ca = second[a-n-1];
      }
      if(b <= n){
        cb = first[b-1];
      } else {
        cb = second[b-n-1];
      }

      if(a <= n){
        first[a-1] = cb;
      } else {
        second[a-n-1] = cb;
      }
      if(b <= n){
        first[b-1] = ca;
      } else {
        second[b-n-1] = ca;
      }
    } else if(t == 2) {
      string escape = first;
      first = second;
      second = escape;
    }
  }
  cout << first + second << endl;
}