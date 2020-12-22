    // Complete the miniMaxSum function below.
    static void miniMaxSum(int[] arr) {
        
        long sum = 0, min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;
        
        for(int i = 0; i < arr.length; i++){
            
            sum += arr[i];
            
            if(arr[i] < min)
                min = arr[i];
                
            if(arr[i] > max)
                max = arr[i];
        }
        
        System.out.print((sum - max) + " " + (sum - min));
        
    }