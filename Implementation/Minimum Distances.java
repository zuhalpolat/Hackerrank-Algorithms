// Complete the minimumDistances function below.
    static int minimumDistances(int[] a) {

        HashMap<Integer, Integer> numbers = new HashMap<Integer, Integer>();
        int index = 0, min = Integer.MAX_VALUE;
        
        for(int i = 0; i < a.length; i++){
                        
            if(numbers.containsKey(a[i])){
                min = Math.min(min, i - numbers.get(a[i]));
            }
            
            numbers.put(a[i], i);
        }
        
        return (min == Integer.MAX_VALUE) ? -1 : min;
    }