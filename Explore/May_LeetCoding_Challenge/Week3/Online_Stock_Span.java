class StockSpanner {
  private List<Integer> prices;
  private List<Integer> dp;

  public StockSpanner() {
    prices = new ArrayList<>();
    dp = new ArrayList<>();
  }

  public int next(int price) {
    if (prices.isEmpty() || price < prices.get(prices.size() - 1)) {
      dp.add(1);
    } else {
      int i = prices.size() - 1;
      while (i >= 0 && prices.get(i) <= price) {
        i -= dp.get(i);
      }
      dp.add(prices.size() - i);
    }
    prices.add(price);
    return dp.get(dp.size() - 1);
  }
}

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner obj = new StockSpanner(); int param_1 = obj.next(price);
 */