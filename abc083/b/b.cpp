#include <bits/stdc++.h>
using namespace std;

int get(int input)
{
  int wa = 0;
  while(input != 0)
  {
    wa += input % 10;
    input /= 10;
  }
  return wa;
}

int main()
{
  int N, A, B;
  cin >> N >> A >> B;
  int ans = 0;
  for (int i = 1; i <= N; i++)
  {
    int plus = get(i);
    if (A <= plus && plus <= B)
    {
      ans += i;
    }
  }
  cout << ans << endl;
}