#include <bits/stdc++.h>
using namespace std;
int a[20][20];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    int maximum = 0;
    int tmp;
    int b[4];
    fstream myfile;
    myfile.open("20x20_grid.txt");
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            myfile >> a[i][j];
        }
    }
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            tmp = a[i][j] * a[i][j+1] * a[i][j+2] * a[i][j+3];
            if(tmp > maximum) {
                b[0] = a[i][j];
                b[1] = a[i][j+1];
                b[2] = a[i][j+2];
                b[3] = a[i][j+3];
                maximum = tmp;
            }
            tmp = a[i][j] * a[i+1][j] * a[i+2][j] * a[i+3][j];
            if(tmp > maximum) {
                b[0] = a[i][j];
                b[1] = a[i+1][j];
                b[2] = a[i+2][j];
                b[3] = a[i+3][j];
                maximum = tmp;
            }
            tmp = a[i][j] * a[i+1][j+1] * a[i+2][j+2] * a[i+3][j+3];
            if(tmp > maximum) {
                b[0] = a[i][j];
                b[1] = a[i+1][j+1];
                b[2] = a[i+2][j+2];
                b[3] = a[i+3][j+3];
                maximum = tmp;
            }
            if (j > 3) {
                tmp = a[i][j] * a[i+1][j-1] * a[i+2][j-2] * a[i+3][j-3];
                if(tmp > maximum) {
                    b[0] = a[i][j];
                    b[1] = a[i+1][j-1];
                    b[2] = a[i+2][j-2];
                    b[3] = a[i+3][j-3];
                    maximum = tmp;
                }
            }
        }
    }
    cout << maximum << endl;
    cout << b[0] << " " << b[1] << " " << b[2] << " " << b[3] << endl;
    myfile.close();
    return 0;
}
