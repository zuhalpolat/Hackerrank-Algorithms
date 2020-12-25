// Complete the jumpingOnClouds function below.
    static int jumpingOnClouds(int[] c) {

        int jump = 0;
        int i = 0;
        
        System.out.print(c.length);

        while(i < c.length - 1){

            if(i+1 == c.length - 1)
                return ++jump;
            
            if(c[i + 2] != 1)
                i += 2;
            else
                i++;
                
            jump++;
        }
        return jump;
    }