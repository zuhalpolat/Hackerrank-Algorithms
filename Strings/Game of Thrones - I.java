// Complete the gameOfThrones function below.
    static String gameOfThrones(String s) {

        HashMap<Character, Integer> map = new HashMap<>();
        int oddCount = 0;
        
        for(int i = 0; i < s.length(); i++){
            
            if(map.containsKey(s.charAt(i))){
                map.put(s.charAt(i), map.get(s.charAt(i)) + 1);
            }
            else{
                map.put(s.charAt(i), 1);
            }
        }
        
        for(Character a : map.keySet()){
            
            int val = map.get(a);
            
            if(val % 2 != 0){
                oddCount++;

                if(oddCount > 1)
                    return "NO";
            }
        }
        return "YES";
    }