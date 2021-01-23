#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;
  int alcohol = 0;
  int alcoholMax = X * 100;
  for (int i = 0; i < N; i++)
  {
    int V = 0;
    int P = 0;
    cin >> V >> P;
    alcohol += (V * P);
    if (alcohol > alcoholMax) {
      cout << i+1 << endl;
      return 0;
    }
  }
    cout << "-1" << endl;
}