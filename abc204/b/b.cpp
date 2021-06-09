#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a > 10) {
            sum += a-10;
        }
    }
    cout << sum << endl;
    return 0;
}