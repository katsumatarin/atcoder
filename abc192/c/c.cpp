#include <bits/stdc++.h>
using namespace std;

int toBig(int N){
  vector<int> vecUp;
  while(N != 0) {
    vecUp.push_back(N % 10);
    N /= 10;
  }
  sort(vecUp.begin(), vecUp.end());
  int sum = 0, x = 1;
  for (int i = 0; i < vecUp.size(); i++) {
    sum += vecUp[i] * x;
    x *= 10;
  }
  return sum;
}

int toSmall(int N){
  vector<int> vecDown;
  while(N != 0) {
    vecDown.push_back(N % 10);
    N /= 10;
  }
  sort(vecDown.begin(), vecDown.end(), greater<int>{});
  int sum = 0, x = 1;
  for (int i = 0; i < vecDown.size(); i++) {
    sum += vecDown[i] * x;
    x *= 10;
  }
  return sum;
}


int main() {
  int N, K;
  cin >> N >> K;

  for (int i = 0; i < K; i++) {
    int Big = toBig(N);
    int Small = toSmall(N);
    N = Big - Small;
  }
  cout << N << endl;

}