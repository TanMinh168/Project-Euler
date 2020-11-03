#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    long long x = 600851475143;
    long long s = sqrt(x);
    long long ans;
    while(!(x % 2)) {
        x /= 2;
    }
    for (int i = 3; i <= s; i += 2) {
        while (!(x % i)) {
            x /= i;
            ans = i;
        }
    }
    cout << ans;
    return 0;
}
