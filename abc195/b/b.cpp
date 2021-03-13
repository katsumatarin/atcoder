#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B, W;
  cin >> A >> B >> W;
  int w_gram = W * 1000;
  int max = w_gram / B;
  int min = w_gram / A;
  cout << max << " " << min << endl;
}