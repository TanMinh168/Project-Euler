#include <bits/stdc++.h>
using namespace std;
long long dp[25][25];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    int gridSize = 20;
    ///stop condition
    for (int i = 0; i < gridSize; i++) {
        dp[i][gridSize] = 1;
        dp[gridSize][i] = 1;
    }

    ///recursion 
    for (int i = gridSize - 1; i >= 0; i--) {
        for (int j = gridSize - 1; j >= 0; j--) {
            dp[i][j] = dp[i+1][j] + dp[i][j+1];
    }
}
    cout << dp[0][0];
    return 0;
}
