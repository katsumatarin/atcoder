#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    auto iter = lower_bound(vec.begin(), vec.end(), k);

    if (iter != vec.end()) {
        int idx = 0;
        for(int i = 0; i < n; i++) {
            if(vec[i] == *iter) {
                idx = i;
                break;
            }
        }
        cout << idx << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}