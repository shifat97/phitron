#include<bits/stdc++.h>
using namespace std;

int main() {
    string n1, n2;
    cin >> n1 >> n2;
    string r = "";
    for (int i = 0; i < n1.size(); i++) {
        if(n1[i] == n2[i]) {
            r += '0';
        } else {
            r += '1';
        }
    }
    cout << r << endl;
    return 0;
}