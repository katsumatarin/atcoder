#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int num = 0, n = N;
  while(n > 0){
    num += n % 10;
    n /= 10;
  }

  if(N % num == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}