// Complete the birthday function below.
    static int birthday(List<Integer> s, int d, int m) {
        
        int match = 0;
        
        for(int i = 0; i <= s.size() - m; i++){
            
            int sum = 0;
            
            for(int j = 0; j < m; j++){
                sum += s.get(i+j);
            }
            
            if(sum == d)
                match++;
        }
        
        return match;
    }