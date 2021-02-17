// Complete the maximumToys function below.
    static int maximumToys(int[] prices, int k) {

        int toys = 0;
        Arrays.sort(prices);
        
        for(int i = 0; i < prices.length; i++){
            
            if(prices[i] <= k)
                toys++;
            else
                break;
            
            k -= prices[i];
        }
        
        return toys;
    }