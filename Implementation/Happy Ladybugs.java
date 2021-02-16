 // Complete the happyLadybugs function below.
    static String happyLadybugs(String b) {

        if(b.length() == 1 && b.charAt(0) == '_')
            return "YES";
        else if(b.length() == 2 && b.charAt(0) == b.charAt(1))
            return "YES";
        else if(b.indexOf('_') < 0)
        {
            String pattern="((\\w)\\2+)+\\_?";
            return b.matches(pattern) ? "YES" : "NO";
        }
        else
        {       
            b = b.replaceAll("_","");

            while(b.length() > 0){
                
                char val = b.charAt(0);
                b = b.substring(1);

                if(b.indexOf(val) < 0)
                    return "NO";
                b = b.replaceAll(String.valueOf(val),"");
            }
        }
        return "YES";
    }