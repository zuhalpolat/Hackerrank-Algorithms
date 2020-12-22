// Complete the breakingRecords function below.
    static int[] breakingRecords(int[] scores) {

        int[] records = {0, 0};
        int max = scores[0];
        int min = scores[0];
                
        for(int i = 1; i < scores.length; i++){
                        
            if(scores[i] > max){
                max = scores[i];
                records[0]++;
            }
            else if(scores[i] < min){
                min = scores[i];
                records[1]++;
            }
        }
        return records;
    }