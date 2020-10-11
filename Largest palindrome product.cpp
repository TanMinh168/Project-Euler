#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    long long p;
    long long maximum = 0;
    string s;
    for (int i = 999; i >= 100; i--) {
        for (int j = 999; j >= 100; j--) {
            p = i * j;
            if (p <= maximum) continue;
            s = to_string(p);
            int index = 3;
            int flag = 0;
            while (index--) {
                if (s[index] != s[5 - index]) break;
                flag++;
            }
            if (flag == 3) maximum = p;
        }
    }
    cout << maximum;
    return 0;
}
