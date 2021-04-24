#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  int a, b;
  int a_max = 0, b_min = 1000;
  for(int i = 0; i < N; i++){
    cin >> a;
    if(a > a_max){
      a_max = a;
    }
  }

    for(int i = 0; i < N; i++){
    cin >> b;
    if(b < b_min){
      b_min = b;
    }
  }


  if(a_max > b_min){
    cout << 0 << endl;
  } else {
    cout << b_min-a_max+1 << endl;
  }
}