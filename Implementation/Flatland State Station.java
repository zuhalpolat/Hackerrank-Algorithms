// Complete the flatlandSpaceStations function below.
    static int flatlandSpaceStations(int n, int[] c) {
           
        Arrays.sort(c);
        int max = c[0], i = 1;
        
        while(i < c.length){
        
            max = Math.max(max, (c[i] - c[i - 1]) / 2); 
            i++;
        }
        
        return Math.max(max, n - c[i - 1] - 1);
    }