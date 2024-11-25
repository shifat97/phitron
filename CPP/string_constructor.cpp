#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s("Hello");
    cout << s << endl;

    string s1("Hello World", 4);
    cout << s1 << endl;

    string s3 = "Hello World";
    string t(s, 4);
    cout << t << endl;

    string s2(5, 'A');
    cout << s2 << endl;
    return 0;
}