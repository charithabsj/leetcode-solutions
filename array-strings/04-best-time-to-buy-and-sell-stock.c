#include <stdio.h>

int maxProfit(int *prices, int pricesSize) {
    int minPrice = prices[0];
    int best = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > best) {
            best = prices[i] - minPrice;
        }
    }

    return best;
}

int main(void) {
    int prices[] = {7, 1, 5, 3, 6, 4};
    printf("%d\n", maxProfit(prices, 6));
    return 0;
}
