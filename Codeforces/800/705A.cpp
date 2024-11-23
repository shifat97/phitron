#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string f = "";
    string t1 = "I hate";
    string t3 = "that I love";
    string t4 = "that I hate";
    if (n == 1) {
        cout << "I hate it" << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0 && i == 1) {
            f = f + t1 + " ";
        } else if (i % 2 == 0) {
            f = f + t3 + " ";
        } else {
            f = f + t4 + " ";
        }
    }
    cout << f + "it" << endl; 
    return 0;
}