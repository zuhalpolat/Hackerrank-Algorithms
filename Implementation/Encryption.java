// Complete the encryption function below.
    static String encryption(String s) {

        s.replace("\\s", "");
        
        int length = s.length();
        
        int range = (int) Math.ceil(Math.sqrt(length));
        
        String result = "";
        
        for(int i = 0; i < range; i++){
            
            int j = i;

            while(j < length){

                result += s.charAt(j);
                j += range;
            }
            
            result += " ";
        }
                
        return result;
    }