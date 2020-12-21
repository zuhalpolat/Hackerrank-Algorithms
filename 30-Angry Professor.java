// Complete the angryProfessor function below.
    static String angryProfessor(int k, int[] a) {

        int early = 0;
    
        for(int i = 0; i < a.length; i++){
            
            if(a[i] <= 0)
                early++;
        }
        
        return (early >= k) ? "NO" : "YES";  
    }