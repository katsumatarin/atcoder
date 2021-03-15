#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int A, B, C;

  vector<int> vec_a;
  for(int i = 0; i < N; i++) {
    cin >> A;
    vec_a.push_back(A);
  }

  int manzokudo = 0;
  for(int i = 0; i < N; i++) {
    cin >> B;
    manzokudo += B;
  }

  vector<int> vec_c;
  for(int i = 0; i < N - 1; i++) {
    cin >> C;
    vec_c.push_back(C);
  }

  for(int i = 0; i < N; i++) {
    if(vec_a[i + 1] - vec_a[i] == 1) {
      manzokudo += vec_c[vec_a[i] - 1];
    }
  }

  cout << manzokudo << endl;
}