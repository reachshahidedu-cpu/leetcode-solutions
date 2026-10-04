#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s)
{
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    // Test Case 1
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s1);

    cout << "Test Case 1: ";
    for (char c : s1)
        cout << c;
    cout << endl;

    // Test Case 2
    vector<char> s2 = {'H'};
    reverseString(s2);

    cout << "Test Case 2: ";
    for (char c : s2)
        cout << c;
    cout << endl;

    return 0;
}