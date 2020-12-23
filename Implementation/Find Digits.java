// Complete the findDigits function below.
    static int findDigits(int n) {
        
        int divisor = 0, rem, temp = n;
        
        while(temp > 0){
            
            rem = temp % 10;
            
            if(rem != 0)
            {
                if(n % rem == 0)
                    divisor++;  
            }
            temp /= 10;
        }
        return divisor;
    }