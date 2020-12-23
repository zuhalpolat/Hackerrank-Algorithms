// Complete the appendAndDelete function below.
    static String appendAndDelete(String s, String t, int k) {

        int same = 0, sl = s.length(), tl = t.length();
        
        if(tl + sl + 1 == k)
            return "Yes";
            
        int length = (sl < tl) ? sl : tl;
        
        for(int i = 0; i < length; i++){
            
            if(s.charAt(i) == t.charAt(i))
                same++;
            else
                break;
        }
        
        if(same > 0){
            
            int change = k - (sl + tl - 2 * same);
            
            if(change >= 0 && (change == 0 || change % 2 == 0))
                return "Yes";
        }
        else{
            
            int change = k - sl - tl;
            
            if(change >= 0)
                return "Yes";
        }
        return "No";
    }