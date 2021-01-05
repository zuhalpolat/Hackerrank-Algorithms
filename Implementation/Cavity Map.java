    // Complete the cavityMap function below.
    static String[] cavityMap(String[] grid) {

        int length = grid.length;
        
        for(int i = 1; i < length - 1; i++){
            
            char[] newGrid = grid[i].toCharArray();
            
            for(int j = 0; j < length - 2; j++){
                
                int front = newGrid[j] - '0';
                int mid = newGrid[j + 1] - '0';
                int last = newGrid[j + 2] - '0';
                int upper = grid[i - 1].charAt(j + 1) - '0';
                int lower = grid[i + 1].charAt(j + 1) - '0';
                
                if(mid > front && mid > last && mid > upper && mid > lower)
                    newGrid[j + 1] = 'X';
            }
            
            grid[i] = String.valueOf(newGrid);
        }
        
        return grid;
    }