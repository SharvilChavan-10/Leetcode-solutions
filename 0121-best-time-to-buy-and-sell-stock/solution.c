int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1){
        return 0;
    }

    int lowprice = prices[0];
    int maxprofit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < lowprice) {
            lowprice = prices[i];
        } 
        else if (prices[i] - lowprice > maxprofit) {
            maxprofit = prices[i] - lowprice;
        }
    }

    return maxprofit;
}

