#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;

  int A, cnt = 0;
  vector<int> vec;
  for(int i = 0; i < N; i++) {
    cin >> A;
    vec.push_back(A);
    cnt += A;
  }

  int d = cnt / (4 * M);

  sort(vec.begin(), vec.end(), greater<int>{});

  for(int i = 0; i < M; i++) {
    if(vec[i] < d) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

}