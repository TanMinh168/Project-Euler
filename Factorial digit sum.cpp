#include <bits/stdc++.h>
using namespace std;

// hàm thực hiện nhân số n! với số n + 1 để được số (n+1)!
void multiply(vector<int> &v, int x) {
    int carry = 0, res;
    int size = v.size();
    for (int i = 0 ; i < size ; i++) {
        int res = carry + v[i] * x;
        v[i] = res % 10;
        carry = res / 10;
    }
    while (carry != 0) {
        v.push_back(carry % 10);
        carry /= 10;
    }
}

// hàm tìm tổng các chữ số của n
int findSumOfDigits(int n) {
    vector<int> v;
    v.push_back(1);

    // thực hiện tính số n!
    for (int i = 1; i <= n; i++)
        multiply(v, i);

    int sum = 0;
    int size = v.size();
    // tính tổng các chữ số của n
    for (int i = 0 ; i < size ; i++)
        sum += v[i];
    return sum;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    cout << findSumOfDigits(100);
    return 0;
}
