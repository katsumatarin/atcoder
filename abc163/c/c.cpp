#include <bits/stdc++.h>
using namespace std;

int A[200010];
int ans[200010];

int main() {
  int N;
  cin >> N;
  for (int i = 2; i <= N; i++){
    cin >> A[i];
  }
  for (int i = 2; i <= N; i++){
    ans[A[i]]++;
  }
  for (int i = 1; i <= N; i++) {
    cout << ans[i] << endl;
  }
}