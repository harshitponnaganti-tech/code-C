int tournamentProfit(int Y) {
    int total_revenue = Y * 200;
    int ground_rent = 5000;
    int profit = total_revenue - ground_rent;
    
    if (profit < 0) {
        return -1;
    }
    
    return profit;
}
