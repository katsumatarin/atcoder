#include<bits/stdc++.h>
using namespace std;

int h, w;
int A[100][100];

int main(){
  cin >> h >> w;
  int minimum = 101;
  for(int i =0 ;i<h;i++)
    for(int j = 0;j<w;j++)
      {
        cin>>A[i][j];
        minimum = min(minimum, A[i][j]);
      }

  int ans = 0;
  for(int i =0 ;i<h;i++)
    for(int j = 0;j<w;j++)
      ans += (A[i][j] - minimum);

  cout << ans << endl;
}