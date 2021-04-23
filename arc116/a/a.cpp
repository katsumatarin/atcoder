#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t t;
  cin >> t;

  vector<int> vec;
  int64_t n;
  for(int64_t i = 0; i < t; i++){
    cin >> n;
    if(n % 4 == 0) vec.push_back(2);
    else if(n % 2 == 0) vec.push_back(0);
    else vec.push_back(1);
  }

  for(int64_t i = 0; i < t; i++){
    if(vec[i] == 0) cout << "Same" << endl;
    else if(vec[i] == 1) cout << "Odd" << endl;
    else if(vec[i] == 2) cout << "Even" << endl;
  }
}