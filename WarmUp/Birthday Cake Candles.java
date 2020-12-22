class Result {

    /*
     * Complete the 'birthdayCakeCandles' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts INTEGER_ARRAY candles as parameter.
     */

    public static int birthdayCakeCandles(List<Integer> candles) {
        
        int maxHeight = candles.get(0);
        int number = 0;
        
        for(int i : candles){
            
            if(i > maxHeight)
                maxHeight = i;
        }

        for(int i : candles){
            
            if(i == maxHeight)
                number++;
        }   
        
        return number;
    }
}