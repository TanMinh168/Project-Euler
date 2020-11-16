#include <bits/stdc++.h>
using namespace std;

/// declare two array with size 1000 to store all digit of each
/// two consecutive elements in Fibonacci sequence during calculate process
int a[1000], b[1000];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);

    /// initiate var count to keep track the index of each element
    /// declare var tmp to store the temporary value during calculating
    int count = 2, tmp;

    /// two first elements in Fibonacci sequence are 1
    a[0] = 1; b[0] = 1;

    /// initiate var carry to store the carry value when carry out the
    /// addition from right to left
    int carry = 0;

    /// continuing while the leftmost digit of two consecutive elements still equal to 0
    while (a[999] == 0 && b[999] == 0) {

        /// reset the value of carry to 0
        carry = 0;

        /// carry out the addition from right to left with var carry,
        /// store the result to a
        for (int i = 0; i < 1000; i++) {
            tmp = a[i] + b[i] + carry;
            a[i] = tmp % 10;
            carry = tmp / 10;
        }

        /// increase the index by 1
        count++;

        /// reset the value of carry to 0
        carry = 0;

        /// break the loop if a reach 1000 digits
        if (a[999] != 0) break;

        /// carry out the same process with b
        for (int i = 0; i < 1000; i++) {
            tmp = a[i] + b[i] + carry;
            b[i] = tmp % 10;
            carry = tmp / 10;
        }
        count++;
    }
    cout << count;
    return 0;
}
