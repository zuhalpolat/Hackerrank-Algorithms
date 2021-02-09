// Complete the anagram function below.
    static int anagram(String s) {
        
        int length = s.length(), i, j;
        
        if(length % 2 != 0)
            return -1;
            
        String first = s.substring(0, length / 2);
        String second = s.substring(length / 2);
        int count = 0;
        
        for(i = 0; i < first.length(); i++){
            
            int val = second.indexOf(first.charAt(i));
            
            if(val != -1)
                second = second.substring(0, val) + second.substring(val + 1);               
            else
                count++;
        }
        return count;
    }