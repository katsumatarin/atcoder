#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> vec;
  for(int i = 0; i < N; i++) {
    int A;
    cin >> A;
    vec.push_back(A);
  }

  int s = vec.size();
  for(int i = 1; i <= s; i++) {
    vector<int>::iterator iter = find(vec.begin(), vec.end(), i);
    size_t index = distance(vec.begin(), iter);
    cout << index + 1;
    if(i != s){
      cout << " ";
    } else {
      cout << endl;
    }
  }

  return 0;
}