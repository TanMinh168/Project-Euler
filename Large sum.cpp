#include <bits/stdc++.h>
using namespace std;
string a[105];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    int sum = 0;
    string rs = "";
    fstream file;
    file.open("large sum.txt");
    for (int i = 0; i < 100; i++) {
        file >> a[i];
    }
    for (int i = 49; i >= 0; i--) {
        for (int j = 0; j < 100; j++) {
            sum += (int)a[j][i] - 48;
        }
        rs += to_string(sum % 10);
        sum = sum / 10;
    }
    rs += to_string(sum);
    for (int i = 1; i <= 10; i++) {
        cout << rs[rs.size() - i];
    }
    return 0;
}
