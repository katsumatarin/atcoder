#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> aVal2cnt(100001, 0);
vector<ll> bVal2cnt(100001, 0);

int main(){
  ll n;
  cin >> n;

  ll a, b, c;
  vector<ll> vec_a, vec_b, vec_c, vec_v;
  for(int i = 0; i < n; i++) {
    cin >> a;
    vec_a.push_back(a);
  }

  for(int i = 0; i < n; i++) {
    cin >> b;
    vec_v.push_back(b);
  }

  for(int i = 0; i < n; i++) {
    cin >> c;
    vec_c.push_back(c);
  }

  for(int i = 0; i < n; i++) {
    vec_b.push_back(vec_v[vec_c[i]-1]);
  }

  ll ans = 0;

  for(int ai =0; ai < vec_a.size(); ai++){
    aVal2cnt[vec_a[ai]]++;
  }

  for(int bi =0; bi < vec_b.size(); bi++){
    bVal2cnt[vec_b[bi]]++;
  }

  for(int val = 1; val <= n; val++){
    ans += aVal2cnt[val] * bVal2cnt[val];
  }

  cout << ans << endl;
  return 0;
}