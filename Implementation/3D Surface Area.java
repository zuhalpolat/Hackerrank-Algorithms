    // Complete the surfaceArea function below.
    static int surfaceArea(int[][] A) {
            
        int area = 0, row = A.length, col = A[0].length, diff = 0;
        
        area += col * row * 2;

        for(int j = 0; j < col; j++){
                
            area += A[0][j];
        }

        for(int j = 0; j < col; j++){
                
            area += A[row - 1][j];
        }

        for(int j = 0; j < row; j++){
                
            area += A[j][0];
        }

        for(int j = 0; j < row; j++){
                
            area += A[j][col - 1];
        }

        for(int i = 0; i < row; i++){
            
            for(int j = 0; j < col - 1; j++){
                
                area += Math.abs(A[i][j] - A[i][j + 1]);
            }
        }
        
        for(int i = 0; i < col; i++){
            
            for(int j = 0; j < row - 1; j++){
                
                area += Math.abs(A[j][i] - A[j + 1][i]);
            }
        }
        
        return area;
    }