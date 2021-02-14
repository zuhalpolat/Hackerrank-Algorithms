    // Complete the marcsCakewalk function below.
    static long marcsCakewalk(int[] calorie) {

        long minWalk = 0;
        
        Arrays.sort(calorie);
        reverse(calorie, calorie.length);
        
        for(int i = 0; i < calorie.length; i++){
            minWalk += (Math.pow(2, i) * calorie[i]); 
        }
        
        return minWalk;
    }
    
    static void reverse(int[] calorie, int len){
        
        int t;
        
        for(int i = 0; i < len / 2; i++){
            t = calorie[i]; 
            calorie[i] = calorie[len - i - 1]; 
            calorie[len - i - 1] = t; 
        }
    
    }