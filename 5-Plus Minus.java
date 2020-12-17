public class Solution {

    // Complete the plusMinus function below.
    static void plusMinus(int[] arr) {
        
        double positives = 0, negatives = 0, zeros = 0;
        int arrLength = arr.length;
        
        for(int i = 0; i < arrLength; i++){
            
            if(arr[i] < 0)
                negatives++;
            else if(arr[i] > 0)
                positives++;
            else
                zeros++;
        }

        System.out.println(positives / arrLength);
        System.out.println(negatives / arrLength);
        System.out.println(zeros / arrLength);

    }