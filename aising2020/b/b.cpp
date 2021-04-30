#include <bits/stdc++.h>
using namespace std;

bool odd = true;

int main(){
  int n;
  cin >> n;
  int a, cnt = 0;
  for(int i = 0; i < n; i++){
    cin >> a;
    if((i+1) % 2 != 0){
      if(a % 2 != 0){
        cnt++;
      }
      odd = false;
    }
  }

  cout << cnt << endl;
}