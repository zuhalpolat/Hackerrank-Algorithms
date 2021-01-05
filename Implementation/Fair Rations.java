// Complete the fairRations function below.
    static String fairRations(int[] B) {

        int ration = 0;
        
        if(IntStream.of(B).sum() % 2 != 0)
            return "NO";
            
        for(int i = 0; i < B.length - 1; i++){
            
            if(B[i] % 2 != 0){
                
                B[i]++;
                B[i + 1]++;
                ration++;
            }
        }

        return String.valueOf(ration * 2);
    }