// Complete the almostSorted function below.
    static void almostSorted(int[] arr) {
        
        int len = arr.length, first = 0, second = 0, temp, i;
        int[] ar = new int[len];
        
        if(isSorted(arr, len - 1))
            System.out.println("yes");
            
        for(i = 0; i < len; i++){
            ar[i] = arr[i];
        }
        
        for(i = 0; i < len - 1; i++){
            
            if(arr[i] > arr[i + 1]){
                first = i;
                break;
            }
        }
        
        for(i = len - 1; i > 0; i--){
            
            if(arr[i - 1] > arr[i]){
                second = i;
                break;
            }
        }
        
        temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
        
        if(isSorted(arr, len - 1)){
            System.out.println("yes");
            System.out.println("swap" + " " + (first + 1) + " " + (second + 1));
        }
        else if(reverse(ar, first, second)){
            System.out.println("yes");
            System.out.println("reverse" + " " + (first + 1) + " " + (second + 1));
        }
        else{
            System.out.println("no");
        }
    }