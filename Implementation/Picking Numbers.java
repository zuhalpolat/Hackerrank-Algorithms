class Result {

    /*
     * Complete the 'pickingNumbers' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts INTEGER_ARRAY a as parameter.
     */

    public static int pickingNumbers(List<Integer> a) {
        
        int[] freq  = new int[100]; 
        int max = 0;
        
        for(int i = 0; i < a.size(); i++){
            freq[a.get(i)]++;
        }
        
        for(int i = 0; i < 99; i++){
            if((freq[i] + freq[i+1]) > max)
                max = freq[i] + freq[i+1];
        }
        
        return max;
    }

}