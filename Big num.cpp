#include <bits/stdc++.h>
using namespace std;

vector<int> res;

void multiply(vector<int> &v, long long x) {
    long long carry = 0, res;
    int s = v.size();
    for (int i = 0 ; i < s ; i++) {
        long long res = carry + v[i] * x;
        v[i] = res % 10;
        carry = res / 10;
    }
    while (carry != 0) {
        v.push_back(carry % 10);
        carry /= 10;
    }
}

void divide(vector<int> &v, long long x) {
    int i = v.size() - 1;
    int tmp = v[i];
    while (tmp < x) {
        tmp = tmp * 10 + v[--i];
    }
    while (i >= 0) {
        res.push_back(tmp / x);
        tmp = (tmp % x) * 10 + v[--i];
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    vector<int> v;
    v.push_back(1);
    multiply(v, 2 * n + 1);
    multiply(v, n);
    multiply(v, n + 1);
    divide(v, 6);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i];
    }
    cout << endl;
    int sum = 0;
    for (int i = 0; i < res.size(); i++) {
        sum = (sum * 10 + res[i]) % 2017;
    }
    cout << sum;
    return 0;
}

