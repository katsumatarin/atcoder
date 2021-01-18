#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B, C, X;
  cin >> A >> B >> C >> X;
  int ans = 0;
  for (int x = 0; x <= A; x++)
  {
    for (int y = 0; y <= B; y++)
    {
      for (int z = 0; z <= C; z++)
      {
        if( 500 * x + 100 * y + 50 * z == X)
        {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
}