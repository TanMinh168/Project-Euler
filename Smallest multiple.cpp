#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    long long p = 2;
    for (long long i = 3; i <= 20; i++) {
        p = (p * i) / __gcd(p, i);
    }
    cout << p;
    return 0;
}
