#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int countEgyptOccurrences(const string &S)
{
    // Create a map to count the frequency of characters
    map<char, int> char_count;

    // Normalize the string to lowercase and count frequencies
    for (char c : S)
    {
        char_count[tolower(c)]++;
    }

    // Define the target word and its character requirements
    string target = "egypt";
    map<char, int> target_count;

    for (char c : target)
    {
        target_count[c]++;
    }

    // Calculate the maximum number of times "egypt" can be formed
    int max_words = INT_MAX;
    for (auto &entry : target_count)
    {
        char c = entry.first;
        int required = entry.second;
        max_words = min(max_words, char_count[c] / required);
    }

    return max_words;
}

int main()
{
    string S;
    cin >> S;

    // Compute and print the result
    cout << countEgyptOccurrences(S) << endl;

    return 0;
}
