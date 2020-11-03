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

long long findNearestPrime(long long x) {
    if (x % 2 == 0) x += 1;
    while (!isPrime(x)) {
        x += 2;
    }
    return x;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    long long s = ceil(sqrt(n));
    long long res = findNearestPrime(s);
    cout << res * res;
    return 0;
}
