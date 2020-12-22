// Complete the catAndMouse function below.
    static String catAndMouse(int x, int y, int z) {

        int catA = Math.abs(z - x);
        int catB = Math.abs(z - y);
            
        if(catA == catB)
            return "Mouse C";
        else if(catA > catB)
            return "Cat B";
        else
            return "Cat A";
    }