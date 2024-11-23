#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int id1, id2, id3;
        string name1, name2, name3;
        char s1, s2, s3;
        int m1, m2, m3;

        cin >> id1 >> name1 >> s1 >> m1;
        cin >> id2 >> name2 >> s2 >> m2;
        cin >> id3 >> name3 >> s3 >> m3;

        int mx = max(m1, max(m2, m3));

        if (mx == m1) {
            cout << id1 << " " << name1 << " " << s1 << " " << m1 << endl;
        } else if (mx == m2) {
            cout << id2 << " " << name2 << " " << s2 << " " << m2 << endl;
        } else if (mx == m3) {
            cout << id3 << " " << name3 << " " << s3 << " " << m3 << endl;
        }
    }
    return 0;
}