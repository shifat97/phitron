#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello World";
    string s2 = " Hi";
    s1 += s2;
    cout << s1 << endl;

    // append()
    s2 = " Hi Hi";
    s1.append(s2);
    cout << s1 << endl;

    // push_back()
    string s3 = "Hello World";
    s3.push_back('x');
    cout << s3 << endl;

    // pop_back()
    s3.pop_back();
    cout << s3 << endl;

    // assign()
    string s4 = "Flutter";
    string s5;
    s5.assign(s4);
    cout << s5 << endl;

    // erase()
    string s6 = "Hello World";
    s6.erase(5);
    cout << s6 << endl;

    // replace()
    string s7 = "Hello World";
    s7.replace(5, 1, "Bangladesh"); // (position, remove, replace)
    cout << s7 << endl;

    // insert()
    string s8 = "Hello";
    s8.insert(5, "World");
    cout << s8 << endl;
    s8.insert(5, " ");
    cout << s8 << endl;
    return 0;
}