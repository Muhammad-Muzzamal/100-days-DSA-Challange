#include <iostream>
#include <climits>
using namespace std;

int maxProfit(int prices[], int size)
{
    int maxP = INT_MIN;

    for (int i = 0; i < size; i++)
    { // select buy day
        int currProfit = 0;

        for (int j = i + 1; j < size; j++)
        { // select sell day

            currProfit = prices[j] - prices[i]; // currprofit = sell_day_Price - buy_day_price
            maxP = max(maxP, currProfit);
        }
    }

    return maxP;
}

int maxProfit1(int arr[], int size)
{
    int maxP = INT_MIN;
    int currP = 0;
    int bestBuy[size];

    bestBuy[0] = INT_MAX;

    for (int i = 1; i < size; i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], arr[i - 1]);
    }

    for (int i = 0; i < size; i++)
    {
        currP = 0;
        currP = arr[i] - bestBuy[i];
        maxP = max(currP, maxP);
    }

    return maxP > 0 ? maxP : 0;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(prices) / sizeof(int);

    int maxP = maxProfit1(prices, size);
    std::cout << maxP << std::endl;
    return 0;
}