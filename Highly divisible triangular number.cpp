#include <bits/stdc++.h>
using namespace std;

int findNumberDivisors(int n) {
    int s = sqrt(n);
    int cnt = 0;
    for (int i = 1; i <= s; i++) {
        if (n % i == 0) {
            cnt++;
            if (n / i != i) cnt++;
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    int i = 1;
    int sum = 0;
    while (findNumberDivisors(sum + i) <= 500) {
        sum += i++;
    }
    cout << sum + i;
    return 0;
}
