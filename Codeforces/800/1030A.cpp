#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], flag = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) cout << "HARD" << endl;
    else cout << "EASY" << endl;
    return 0;
}