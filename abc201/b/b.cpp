#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N;
  cin >> N;

  string S, frS, scS;
  int T, frT = 0, scT = 0;
  for(int i = 0; i < N; i++){
    cin >> S >> T;
    if(T > frT){
      scT = frT;
      frT = T;
      scS = frS;
      frS = S;
    } else if(T > scT){
      scT = T;
      scS = S;
    }
  }
  cout << scS << endl;
  return 0;
}