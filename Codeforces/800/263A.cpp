#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[5][5];
    int count = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];

            if (i == 2 && j == 2 && a[i][j] == 1) {
                cout << 0 << endl;
                break;
            } else if(a[i][j] == 1) {
                cout << abs(j - 2) + abs(i - 2) << endl;
                break;
            }

        }
    }
    return 0;
}