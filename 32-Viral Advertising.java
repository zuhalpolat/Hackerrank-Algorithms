// Complete the viralAdvertising function below.
    static int viralAdvertising(int n) {

        int people = 5;
        int total = 0;
        
        for(int i = 0; i < n; i++){
            
            total += people / 2;
            people = (people / 2) * 3;
        }
        
        return total;
    }