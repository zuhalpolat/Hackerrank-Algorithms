// Complete the organizingContainers function below.
    static String organizingContainers(int[][] container) {

        int size = container.length;
        int[] rowTotal = new int[size];
        int[] colTotal = new int [size];
        String result = "Possible";
        
        for(int i = 0; i < size; i++){
            
            for(int j = 0; j < size; j++){
                
                rowTotal[i] += container[i][j];
                colTotal[i] += container[j][i];
            }
        }

        for(int i = 0; i < size; i++)
        {
            int j = 0;
            for(j = i; j < size; j++)
            {
                if(rowTotal[i] == colTotal[j])
                {
                    int temp = colTotal[j];
                    colTotal[j] = colTotal[i];
                    colTotal[i] = temp;
                    break;
                }
            }
            if(j == size)
            {
                result = "Impossible";
                break;
            }
        }
        return result;
    }