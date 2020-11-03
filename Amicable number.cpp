#include <bits/stdc++.h>
using namespace std;
long long sum;
vector<pair <int, int>> v;
int d[10000];

// hàm tính tổng các ước của số n
int sumDivisors(int n) {
    int ans = 1;
    int s = sqrt(n) + 1;
    for (int i = 2; i < s; i++) {
        if (n % i == 0) {
            ans += i;
            int tmp = n / i;
            if (tmp != i) ans += tmp;
        }
    }
    return ans;
}


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    // duyệt 2 vòng lặp để quét hết các cặp số nhỏ hơn 10000
    for (int i = 1; i <= 9999; i++) {
        // lưu tổng ước của một số vào mảng
        d[i] = sumDivisors(i);
        for (int j = i + 1; j <= 9999; j++) {
            if (d[j] == 0) { // nếu tổng ước chưa được tính thì tính
                d[j] = sumDivisors(j);
            }
            if (d[i] == j && d[j] == i) {
                sum += i;
                sum += j;
            }
        }
    }
    cout << sum;
}

