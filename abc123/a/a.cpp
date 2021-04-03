#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec;
  int input;
  for(int i = 0; i < 5; i++) {
    cin >> input;
    vec.push_back(input);
  }

  sort(vec.begin(), vec.end());

  int k;
  cin >> k;

  if(k < vec[4] - vec[0])   cout << ":(" << endl;
  else cout << "Yay!" << endl;

}