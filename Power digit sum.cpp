#include<bits/stdc++.h>
using namespace std;
int d[305]; // do 2^1000 có 302 chữ số nên tạo mảng khoảng 305 phần tử
int carry;  // biến nhớ
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    int e = 1000; // số mũ
    int sum = 0; // biến lưu tổng các chữ số của kết quả
    int tmp; // biến tạm lưu giá trị để tính ra chữ số thứ i của 2^x
    d[0] = 1;
    for(int i = 0; i < e; i++) { // duyệt để tính lần lượt 2^1, 2^2,..., 2^1000
        carry = 0;
        for(int j = 0; j < 305; j++) { // duyệt mảng lưu các chữ số của 2^1000
            tmp = 2 * d[j] + carry; // biến tạm lưu giá trị tính chữ số thứ j của 2^i
            if(tmp > 9) { // nếu biến tạm có 2 chữ số
                d[j] = tmp % 10; // lưu chữ số thứ j 
                carry = tmp /10; // lưu biến nhớ
            } else { // biến tạm có 1 chữ số
                d[j] = tmp; // lưu chữ số thứ j
                carry = 0; // lưu biến nhớ
            }
        }
    }
    for(int k = 0; k < 302; k++) { // duyệt mảng tính tổng các chữ số
        sum += d[k];  
    }
    cout << sum;
    return 0;
}
