#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    long long sum_of_square = 0;
    long long sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
        sum_of_square += (i * i);
    }
    cout << sum * sum - sum_of_square;
    return 0;
}
