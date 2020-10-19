#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n == 1) return false;
    if (n < 4) return true;
    if (n % 2 == 0) return false;
    if (n < 9) return true;
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
    long long sum = 2;
    for (int i = 1; i < 2000000; i+=2) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
