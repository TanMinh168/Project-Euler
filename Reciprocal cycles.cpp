#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int ans = 0;

int findCycle(int n) {
    /// cancel out all prime factors 2 and 5 of n
    while (n % 2 == 0) n /= 2;
    while (n % 5 == 0) n /= 5;

    /// if n = 1 after that, it has no reciprocal cycle
    if (n == 1) return 0;

    int modVal = 10 % n;
    int currMod = modVal;
    int k = 1;

    ///find the value k that : 10 ^ k mod n = 1
    while (true) {
        if (currMod == 1) {
            return k;
        }
        currMod = (currMod * modVal) % n;
        k++;
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);

    /// the longest reciprocal cycle so far
    int max = 0;
    for (int i = 1; i <= N; i+=2) {
        int cycle = findCycle(i);

        /// update the longest cycle value
        if (cycle > max) max = cycle;
        cout << i << " " << findCycle(i) << endl;
    }
    cout << max;
    return 0;
}
