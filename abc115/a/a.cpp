#include <bits/stdc++.h>
using namespace std;

int main(){
  int D;
  cin>>D;
  string ans;
  if(D==25) ans="Christmas";
  if(D==24) ans="Christmas Eve";
  if(D==23) ans="Christmas Eve Eve";
  if(D==22) ans="Christmas Eve Eve Eve";
  cout<<ans<<endl;
  return 0;
}