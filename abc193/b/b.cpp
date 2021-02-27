#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int A, P, X;
  bool zaiko = false;
  vector<int> vec;
  for(int i = 0; i < N; i++) {
    cin >> A >> P >> X;
    if(X - A > 0) {
      zaiko = true;
      vec.push_back(P);
    }
  }
  sort(vec.begin(), vec.end());
  if(zaiko == true) {
    cout << vec[0] << endl;
  } else {
    cout << "-1" << endl;
  }
}