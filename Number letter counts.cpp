#include <bits/stdc++.h>
using namespace std;
long long cnt = 0;
int unit;

void toLetter(int n) {
    stack<string> s;
    int id = 0; // biến theo dõi đang ở hàng nào 0: đơn vị, 1: chục, 2: trăm
    bool flag1; // biến đánh dấu tồn tại từ thể hiện hàng đơn vị
    bool flag2; // biến đánh dấu tồn tại từ thể hiện hàng chục
    while (n > 0) {
        if (id == 0 || id == 2) {
            if (id == 0) unit = n % 10; // lưu chữ số hàng đơn vị
            switch (n % 10) {
                case 1: s.push("one"); cnt += 3; break;
                case 2: s.push("two"); cnt += 3; break;
                case 3: s.push("three"); cnt += 5; break;
                case 4: s.push("four"); cnt += 4; break;
                case 5: s.push("five"); cnt += 4; break;
                case 6: s.push("six"); cnt += 3; break;
                case 7: s.push("seven"); cnt += 5; break;
                case 8: s.push("eight"); cnt += 5; break;
                case 9: s.push("nine"); cnt += 4; break;
                default: s.push(""); flag1 = true; //đánh dấu tồn tại từ thể hiện hàng đơn vị
            }
        } else if (id == 1) { // hàng chục
            switch (n % 10) {
                case 1: { // trường hợp là số 10 -> 19
                    s.pop(); // lấy phần tử hàng đơn vị ra khỏi stack
                    switch (unit) {
                        case 1: s.push("eleven"); cnt += 3; break;
                        case 2: s.push("twelve"); cnt += 3; break;
                        case 3: s.push("thirteen"); cnt += 3; break;
                        case 4: s.push("fourteen"); cnt += 4; break;
                        case 5: s.push("fifteen"); cnt += 3; break;
                        case 6: s.push("sixteen"); cnt += 4; break;
                        case 7: s.push("seventeen"); cnt += 4; break;
                        case 8: s.push("eighteen"); cnt += 3; break;
                        case 9: s.push("nineteen"); cnt += 3; break;
                        default: s.push("ten"); cnt += 3;
                    }
                } break;
                case 2: s.push("twenty-"); cnt += 6; break;
                case 3: s.push("thirty-"); cnt += 6; break;
                case 4: s.push("forty-"); cnt += 5; break;
                case 5: s.push("fifty-"); cnt += 5; break;
                case 6: s.push("sixty-"); cnt += 5; break;
                case 7: s.push("seventy-"); cnt += 7; break;
                case 8: s.push("eighty-"); cnt += 6; break;
                case 9: s.push("ninety-"); cnt += 6; break;
                default: s.push(""); flag2 = true;
            }
        }
        n /= 10;
        id++;
    }
    while (!s.empty()) {
        cout << s.top();
        s.pop();
        if (id == 3) { // nếu là chữ số hàng trăm thì in thêm hundred
            cout << " hundred";
            cnt += 7;
            id = 0;
            if (!flag1 || !flag2) { // nếu tồn tại từ thể hiện hàng đơn vị hoặc hàng chục thì in thêm and
                cout << " and ";
                cnt += 3;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    for (int i = 1; i < 1000; i++) {
        cout << i << " : ";
        toLetter(i);
        cout << endl;
    }
    cout << cnt + 11; // cộng thêm 11 đơn vị của từ one thousand
    return 0;
}
