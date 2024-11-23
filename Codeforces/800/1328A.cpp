#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        if (a % b == 0) {
            cout << 0 << endl;
        } else {
            cout << b - (a % b) << endl;
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int a, b;
//         cin >> a >> b;
//         int count = 0;
//         while (a % b != 0) {
//             a += 1;
//             count++;
//         }
//         cout << count << endl;
//     }
//     return 0;
// }