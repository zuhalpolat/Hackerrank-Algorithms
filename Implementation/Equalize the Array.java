public class Solution {

    // Complete the equalizeArray function below.
    static int equalizeArray(int[] arr) {

    int array[] = new int[101];
    Arrays.fill(array, 0, 101, 0);
    
    int max = 0;
    
    for(int i = 0; i < arr.length; i++){
       array[arr[i]]++;
       
       if(array[arr[i]] > max)
            max = array[arr[i]];
    }
    
    return arr.length - max;    
}