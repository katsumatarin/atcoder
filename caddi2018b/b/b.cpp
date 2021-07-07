#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   int n,h,w;
  cin>>n>>h>>w;
  int count=0;
  vector<int> a(n),b(n);
    for(int i=0; i<n; i++){
      cin>>a[i]>>b[i];
    }

    for(int i=0; i<n; i++){
      if(a[i]>=h && b[i]>=w) count++;
    }
  cout<<count<<endl;
}