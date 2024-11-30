#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, n;
    getline(cin, s);
    getline(cin, n);
    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word) {
        if (word == n) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}