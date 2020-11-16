#include <bits/stdc++.h>
using namespace std;

/// calculate the sum of all the letter in a name
int sum(string str) {
    /// initiate the total = 0
    int total = 0;

    /// add integer value of each letter to the total
    for (int i = 0; i < str.size (); i++)
        if (isalpha(str[i]))
            total += tolower(str[i]) - 96;

    return total;
}

int main() {
    long int total = 0;
    int count = 0;
    char ch;
    ifstream file;
    vector<string> v;


    /// read file contains the list of unordered names
    file.open ("names.txt");

    while (!file.eof ()) {
        v.resize (v.size () + 1);
        ch = file.get();
        while (ch != ',' && !file.eof ()) {
            v[v.size () - 1] += ch;
            ch = file.get();
        }
    }

    /// sort the list of names into alphabetical order
    sort (v.begin (), v.end ());

    /// calculate the score for each name
    for (unsigned int i = 0; i < v.size (); i++)
        total += (i + 1) * sum (v[i]);

    file.close ();

    cout << total << endl;
    return 0;
}

