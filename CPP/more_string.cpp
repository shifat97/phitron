#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    bool check = s == "Hello world";

    /*
        size(),
        max_size(),
        capacity()
    */
    string s1;
    cin >> s1;        // Input the first word only
    getline(cin, s1); // Input full sentence
    cout << s1.size() << endl;
    cout << s1.max_size() << endl;
    cout << s1.capacity() << endl;

    /*
        clear(),
        empty(),
    */
    string s2 = "Hello";
    s2.clear();
    if (s2.empty())
        cout << "String is empty" << endl;
    else
        cout << "String is not empty" << endl;

    /*
        resize()
    */
    string s3 = "Hello World";
    s3.resize(4);
    cout << s3 << endl;
    s3.resize(15, 'x');
    cout << s3 << endl;

    return 0;
}