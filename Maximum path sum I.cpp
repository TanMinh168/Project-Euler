#include <bits/stdc++.h>
using namespace std;
int dp[105][105];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    fstream file;
    file.open("maximum path sum I.txt");
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < i+1; j++) {
            file >> dp[i][j];
        }
    }
    for (int i = 98; i >= 0; i--) {
        for (int j = 0; j <= i + 1; j++) {
            dp[i][j] += max(dp[i+1][j], dp[i+1][j+1]);
        }
    }
    cout << dp[0][0];
    return 0;
}
