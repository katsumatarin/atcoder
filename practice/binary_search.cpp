#include <bits/stdc++.h>
using namespace std;
using ll = long long;

double f(double x) {
    return (x-sqrt(2))*(x-sqrt(2))*(x-sqrt(2));
}

bool is_ok(double x) {
    if(f(x) >= 0) {
        return true;
    }
    return false;
}

int main(){

    double ok = 10000, ng = -10000;
    cout << "ok=" << ok << ", " << "ng=" << ng << "\n";

    while(ok - ng > 1) {
        double mid = (ok + ng) / 2;
        if(is_ok(mid)) {
            ok = mid;
        } else {
            ng = mid;
        }
        cout << "ok=" << ok << ", " << "ng=" << ng << "\n";
    }

    cout << ok << endl;
    return 0;
}