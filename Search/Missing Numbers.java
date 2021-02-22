public class Solution {

    // Complete the missingNumbers function below.
    static int[] missingNumbers(int[] arr, int[] brr) {

        Map<Integer, Integer> freq1 = new HashMap<Integer, Integer>();
        Map<Integer, Integer> freq2 = new HashMap<Integer, Integer>();
        int res = 0, k = 0;
        int[] ar = new int[brr.length - arr.length]; 

        
        for(int i : brr){
            Integer a = freq1.get(i);
            freq1.put(i, (a == null) ? 1 : a + 1);
        }
        
        for(int i : arr){
            Integer a = freq2.get(i);
            freq2.put(i, (a == null) ? 1 : a + 1);
        }
        
        for(Map.Entry<Integer, Integer> val : freq1.entrySet()) {
            Integer freq = freq2.get(val.getKey());
            
            res = (freq == null) ? 1 : val.getValue() - freq;
            if(res > 0){
                ar[k++] = val.getKey();
            }
        }
        
        int[] result = new int[k]; 
        
        for(int i = 0; i < k; i++){
            
            result[i] = ar[i];
        }

        return result;
    }
}