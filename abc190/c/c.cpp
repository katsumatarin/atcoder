#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector <pair<int, int>> AB;
  int A, B;
  for (int i = 0; i < N; i++) {
    cin >> A >> B;
    AB.push_back(make_pair(A, B));
  }
  int K;
  cin >> K;
  int C, D;
  vector <pair<int , int>> CD;
  for (int i = 0; i < N; i++) {
    cin >> C >> D;
    CD.push_back(make_pair(C, D));
  }

  int ans = 0;
}