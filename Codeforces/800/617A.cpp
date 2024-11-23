#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int step = n / 5;
    if (n % 5 != 0) {
        step += 1;
    }
    cout << step << endl;
    
    return 0;
}
