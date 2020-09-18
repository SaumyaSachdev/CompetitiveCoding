//Medium - https://leetcode.com/problems/online-stock-span/
//Author - Saumya Sachdev

import java.util.Stack;

class StockSpanner {
    Stack<int[]> prices;

    public StockSpanner() {
        prices = new Stack<>();
    }

    public int next(int price) {
        int span = 1;
        while(!prices.isEmpty() && prices.peek()[0] <= price) {
            span = span + prices.pop()[1];
        }
        prices.push(new int[]{price, span});
        return span;
    }
}

 public class OnlineStockSpan{
   public static void main(String args[]) {
      int[] input = {100, 80, 60, 70, 60, 75, 85};
      StockSpanner obj = new StockSpanner();
      for(int i : input) {
        System.out.println(obj.next(i));
      }
   }
 }
