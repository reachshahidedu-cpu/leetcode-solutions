#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
    string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++)
    {
        int j = 0;

        while (j < prefix.length() &&
               j < strs[i].length() &&
               prefix[j] == strs[i][j])
        {
            j++;
        }

        prefix = prefix.substr(0, j);

        if (prefix.empty())
            return "";
    }

    return prefix;
}

int main()
{
    // Test Case 1
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Test Case 1: " << longestCommonPrefix(strs1) << endl;

    // Test Case 2
    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Test Case 2: "
         << (longestCommonPrefix(strs2).empty() ? "\"\"" : longestCommonPrefix(strs2))
         << endl;

    return 0;
}