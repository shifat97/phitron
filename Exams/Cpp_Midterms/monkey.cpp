#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while(getline(cin, s)) {
        char a[s.size()];
        int index = 0;  

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                continue; 
            }
            a[index++] = s[i]; 
        }

        sort(a, a + index);

        for (int i = 0; i < index; i++) {
            cout << a[i];  
        }
        cout << endl; 
    }
    return 0;
}
