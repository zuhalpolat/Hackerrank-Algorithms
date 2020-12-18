// Complete the migratoryBirds function below.
    static int migratoryBirds(List<Integer> arr) {
            
        int populations[] = new int[6];
            
        for(int i = 0; i < arr.size(); i++){
            populations[arr.get(i)]++;
        }

        int max = populations[0];
        int index = 0;
         
        for(int i = 1; i < populations.length; i++){
            if(populations[i] > max){
                max = populations[i];
                index = i;
            }
        }
        
        return index;
    }