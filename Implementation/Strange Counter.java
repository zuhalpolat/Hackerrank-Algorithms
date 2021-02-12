// Complete the strangeCounter function below.
    static long strangeCounter(long t) {
                
        long val = 3, counter = 0;
        
        while(t > 0){

            if(t <= val){
                counter = (val + 1) - t;           
            }

            t -= val;
            val *= 2;
        }
        return counter;
    }