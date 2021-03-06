#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    long long limit = 4e6;
    long long sum = 0;
    long long a = 1, b = 2;
    while(1) {
        if(a % 2 == 0) sum += a;
        if(b % 2 == 0) sum += b;
        a += b;
        if (a > limit) break;
        b += a;
        if (b > limit) break;
    }
    cout << sum;
    return 0;
}
