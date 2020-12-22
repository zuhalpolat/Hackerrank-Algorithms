// Complete the beautifulDays function below.
    static int beautifulDays(int i, int j, int k) {

        int reverse = 0;
        int day = 0;
        int rem = 0;
        int temp = 0;
        
        for(int l = i; l <= j; l++){
            
            temp = l;
            while(temp != 0){
                rem = temp % 10;
                reverse = (reverse * 10) + rem;
                temp /= 10;
            }
            if((Math.abs(l - reverse) % k) == 0){
                day++;
            }
            reverse = 0;
        }
        return day;
    }