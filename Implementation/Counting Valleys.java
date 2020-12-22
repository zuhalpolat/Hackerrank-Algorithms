class Result {

    /*
     * Complete the 'countingValleys' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER steps
     *  2. STRING path
     */

    public static int countingValleys(int steps, String path) {
    // Write your code here
        
        int level = 0;
        int valley = 0;
        
        for(int i = 0; i < path.length(); i++){
            char ch = path.charAt(i);
            
            if(ch == 'U')
                level++;
            else
                level--;
                
            if(level == 0 && ch == 'U')
                valley++;
        }
        return valley;
    }
}