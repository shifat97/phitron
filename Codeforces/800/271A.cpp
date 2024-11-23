#include<bits/stdc++.h>
using namespace std;

int main() {
    int year;
    cin >> year;
    while (year++) {
        int y = year;
        set<int> d;
        while (y > 0)
        {
            int ld = y % 10;
            d.insert(ld);
            y = y / 10;
        }
        if (d.size() == 4) {
            cout << year << endl;
            break;
        }
    }
    return 0;
}