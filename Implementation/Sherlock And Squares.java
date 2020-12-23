// Complete the squares function below.
    static int squares(int a, int b) {

        int min = (int) Math.ceil(Math.sqrt(a));
        int max = (int) Math.floor(Math.sqrt(b));

        return max - min + 1;
    }
