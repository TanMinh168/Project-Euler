#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n == 1) return false;
    if (n < 4) return true; /// 2, 3 is primes
    if (n % 2 == 0) return false;
    if (n < 9) return true; /// 5, 7 is primes
    if (n % 3 == 0) return false;
    int r = floor(sqrt(n));
    int f = 5;
    while (f <= r) {
        if (n % f == 0) return false;
        if (n % (f + 2) == 0) return false;
        f += 6;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    int cnt = 1;
    long long n = 3;
    while(cnt < 1e4 + 1) {
        if (isPrime(n)) {
            cnt++;
            cout << n << endl;
        }
        n += 2;
    }
    cout << n - 2 << endl;
    return 0;
}
