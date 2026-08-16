//GREEDY APPROACH 
/*class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int minprice = prices[0];       
        int profit =0;

        for (int i=0; i<n; i++){

            if (prices[i]< minprice){
                minprice = prices[i];
            }
            else{
                profit = max (profit , prices[i] - minprice);
            }
        }
        return profit;
    }
}; */


//DYANAMIC PROGRAMMING 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        vector<int> profit(n, 0);
        int minPrice = prices[0];

        for (int i = 1; i <n ;  i++) {
            minPrice = min(minPrice, prices[i]);
            profit[i] = max(profit[i - 1], prices[i] - minPrice);
        }
        return profit[n - 1];
}}; 
