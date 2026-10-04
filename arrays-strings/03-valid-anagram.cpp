#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;

    int count[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
            return false;
    }

    return true;
}

int main()
{
    // Test Case 1
    cout << "Test Case 1: "
         << (isAnagram("anagram", "nagaram") ? "true" : "false")
         << endl;

    // Test Case 2
    cout << "Test Case 2: "
         << (isAnagram("rat", "car") ? "true" : "false")
         << endl;

    return 0;
}