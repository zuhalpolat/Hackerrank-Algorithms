    public static int nonDivisibleSubset(int k, List<Integer> s) {
        
        int[] remainders = new int[k];
        
        for(Integer number : s){
            remainders[number % k]++;
        }
        
        int zero = remainders[0];
        
        int maxNumberOfDivisible = zero > 0 ? 1 : 0;

        for (int i = 1; i <= (k / 2); i++) {
            
            if (i != k - i)
                maxNumberOfDivisible += Math.max(remainders[i], remainders[k - i]);
            else
                maxNumberOfDivisible ++;
        }

        return maxNumberOfDivisible;
    }