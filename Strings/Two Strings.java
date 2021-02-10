// Complete the twoStrings function below.
    static String twoStrings(String s1, String s2) {

        for(int i = 0; i < s1.length(); i++){
            
            if(s2.indexOf(s1.charAt(i)) > -1){
                return "YES";
            }
            else{
                s2 = s2.replaceAll(String.valueOf(s1.charAt(i)),"");
                s1 = s1.replaceAll(String.valueOf(s1.charAt(i)),"");
            }
        }
        return "NO";
    }