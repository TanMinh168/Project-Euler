#include<bits/stdc++.h>
using namespace std;
int d[305];
int carry;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    int e = 1000;
    int sum = 0;
    int tmp;
    d[0] = 1;
    for(int i = 0; i < e; i++) {
        carry = 0;
        for(int j = 0; j < 305; j++) {
            tmp = 2 * d[j] + carry;
            if(tmp > 9) {
                d[j] = tmp % 10;
                carry = tmp /10;
            } else {
                d[j] = tmp;
                carry = 0;
            }
        }
    }
    for(int k = 0; k < 302; k++) {
        sum += d[k];
    }
    cout << sum;
    return 0;
}
