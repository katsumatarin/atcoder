#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int a;
  vector<int> vec;
  for(int i = 0; i < N; i++) {
    cin >> a;
    vec.push_back(a);
  }
  int size = vec.size();
  sort(vec.begin(), vec.end());

  cout << vec[size-1] - vec[0] << endl;
}