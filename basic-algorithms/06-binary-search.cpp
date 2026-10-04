#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    // Test Case 1
    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    cout << "Test Case 1: " << search(nums1, 9) << endl;

    // Test Case 2
    vector<int> nums2 = {-1, 0, 3, 5, 9, 12};
    cout << "Test Case 2: " << search(nums2, 2) << endl;

    return 0;
}