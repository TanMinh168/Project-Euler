#include <bits/stdc++.h>
using namespace std;
int a[1000], b[1000];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    bool flag = false;
    int count = 2, tmp;
    a[0] = 1; b[0] = 1;
    int carry = 0;
    while (a[999] == 0 && b[999] == 0) {
        carry = 0;
        for (int i = 0; i < 1000; i++) {
            tmp = a[i] + b[i] + carry;
            a[i] = tmp % 10;
            carry = tmp / 10;
        }
        count++;
        carry = 0;
        if (a[999] != 0) break;
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
