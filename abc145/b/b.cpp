#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    string s;
    cin >> n >> s;
    if(s.substr(0, n/2) == s.substr(n/2)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}