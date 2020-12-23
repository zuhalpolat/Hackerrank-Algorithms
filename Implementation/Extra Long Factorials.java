// Complete the extraLongFactorials function below.
    static void extraLongFactorials(int n) {

        System.out.println(factorial(n));
    }
    
    static BigInteger factorial(int n){
        
        BigInteger factorial = BigInteger.ONE;
        
        for(int i = n; i > 0; i--){
            factorial = factorial.multiply(BigInteger.valueOf(i));
        }
            
        return factorial;
    }