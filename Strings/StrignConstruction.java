// Complete the stringConstruction function below.
    static int stringConstruction(String s) {

        int ar[]=new int[26];
         for(int i=0;i<s.length();i++)
         {
             char ch=s.charAt(i);
             ar[ch-97]++;
         }
         int count=0;
         for(int i=0;i<ar.length;i++)
         {
            if(ar[i]!=0)
                count++;
         }
            

         return count;
    }