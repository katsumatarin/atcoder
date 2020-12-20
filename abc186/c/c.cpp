#include<bits/stdc++.h>
using namespace std;

int N;


int main(){
  cin >> N;
  int ans = N; // 答え
  int contain7 = 0; // 7を10進法か8進法で含む数の個数

  for(int i = 1; i <= N; i++){
    int num = i;
    int flag = 0;
    while(num > 0){
      if(num % 10 == 7){
        flag = 1;
      }
      num /= 10;
    }

    num = i;
    while(num > 0){
      if(num % 8 == 7){
        flag = 1;
      }
      num /= 8;
    }
    if(flag == 1)
      contain7++;
  }

  ans -= contain7;
  cout << ans << endl;
}