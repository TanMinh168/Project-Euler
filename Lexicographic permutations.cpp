#include <bits/stdc++.h>
using namespace std;
int a[10];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    /// initiate an array contains all one-digit numbers
    for (int i = 0; i < 10; i++) {
        a[i] = i;
    }
    /// initiate variable count
    int count = 0;
    do {
        /// increase value of count by 1
        ++count;
        if (count == 1e6) {
            /// print out the permutation 1000000th of the beginning array and break
            for (int i = 0; i < 10; i++) {
                cout << a[i];
            }
            break;
        }
    } while (next_permutation(a, a + 10));
    return 0;
}

