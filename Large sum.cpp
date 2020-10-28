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
        // đọc file
        file >> a[i];
    }
    // tính tổng 50 số từ phải quả trái (từ hàng đơn vị trở đi)
    for (int i = 49; i >= 0; i--) { // duyệt chữ số thứ i
        for (int j = 0; j < 100; j++) { // tính tổng tất cả các chữ số thứ i của 100 số
            sum += (int)a[j][i] - 48; 
        }
        // lưu chữ số hàng mới tìm được vào xâu rs
        rs += to_string(sum % 10);
        // lưu giá trị nhớ cho hàng tiếp theo vào biến sum
        sum = sum / 10;
    }
    rs += to_string(sum); // đính phần còn lại vào xâu rs
    for (int i = 1; i <= 10; i++) { // in ra 10 chữ số đầu tiên 
        cout << rs[rs.size() - i];
    }
    return 0;
}
