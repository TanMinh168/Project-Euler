#include <iostream>
#include <ctime>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int sum (string str) {
    int total = 0;

    for (unsigned int i = 0; i < str.size (); i++)
        if (isalpha (str[i]))
            total += tolower (str[i]) - 96;

    return total;
}

int main() {
    long int total = 0;
    int count = 0;
    char ch;
    ifstream file;
    vector<string> v;


    // đọc file
    file.open ("names.txt");

    while (!file.eof ())
    {
        v.resize (v.size () + 1);
        count = 0;
        ch = file.get ();
        while (ch != ',' && !file.eof ()) {
            v[v.size () - 1] += ch;
            ch = file.get ();
            count++;
        }
    }

    // sắp xếp tên theo thứ tự từ điển
    sort (v.begin (), v.end ());

    // tính điểm cho từng tên
    for (unsigned int i = 0; i < v.size (); i++)
        total += (i + 1) * sum (v[i]);

    file.close ();

    cout << total << endl;
    return 0;
}

