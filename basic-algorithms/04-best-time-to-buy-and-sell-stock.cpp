#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int minPrice = prices[0];
    int maxProfitValue = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] < minPrice)
            minPrice = prices[i];

        int profit = prices[i] - minPrice;

        if (profit > maxProfitValue)
            maxProfitValue = profit;
    }

    return maxProfitValue;
}

int main()
{
    // Test Case 1
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << "Test Case 1: " << maxProfit(prices1) << endl;

    // Test Case 2
    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "Test Case 2: " << maxProfit(prices2) << endl;

    return 0;
}