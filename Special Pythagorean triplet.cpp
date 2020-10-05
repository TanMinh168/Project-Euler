#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    int s = 1000;
    int sm, k;
    int d, n, a, b, c;
    int s2 = s / 2;
    int mlimit = floor(sqrt(s2)) - 1;
    for (int m = 2; m <= mlimit; m++) {
        if (s2 % m == 0) {
            sm = s2 / m;
            while (sm % 2 == 0) sm /= 2;
            if (m % 2 == 1) k = m + 2;
            else k = m + 1;
            while (k < 2*m && k <= sm) {
                if (sm % k == 0 && __gcd(k, m) == 1) {
                    d = s2 / (k*m);
                    n = k - m;
                    a = d * (m*m - n*n);
                    b = 2 * d * m * n;
                    c = d * (m*m + n*n);
                    cout << a << " " << b << " " << c << endl;
                    cout << a * b * c;
                }
                k += 2;
            }
        }
    }

    return 0;
}
