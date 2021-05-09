#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n;
  cin >> n;
  ll a;

  vector<int> v;

  for(ll i = 0; i < n; i++){
    cin >> a;
    v.push_back(a%200);
  }


  ll cnt;
  ll size = v.size();

  for(int i = 0; i < size; i++){
    cout << v[i] << endl;
  }
  // for(int i = 0; i < size; i++){
  //   for(int j = i+1; j < size; j++){
  //     if((v[i] - v[j])%200 == 0){
  //       cnt++;
  //     }
  //   }
  // }
  // cout << cnt << endl;
  return 0;
}