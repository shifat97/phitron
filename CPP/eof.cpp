#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int x; 
    while(cin >> x) {
        cout << x << endl;
    }

    double d = 23.456677;
    cout << fixed << setprecision(2) << d << endl;

    return 0;
}