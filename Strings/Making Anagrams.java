public class Solution {

    // Complete the makingAnagrams function below.
    static int makingAnagrams(String s1, String s2) {

        int count = 0;
        HashMap<Character, Integer> s1map = new HashMap<Character, Integer>();
        HashMap<Character, Integer> s2map = new HashMap<Character, Integer>();

        for(int i = 0; i < s1.length(); i++){
            
            if(s1map.containsKey(s1.charAt(i))){
                s1map.put(s1.charAt(i), s1map.get(s1.charAt(i)) + 1);
            }
            else{
                s1map.put(s1.charAt(i), 1);
            }
        }
        
        for(int i = 0; i < s2.length(); i++){
            
            if(s2map.containsKey(s2.charAt(i))){
                s2map.put(s2.charAt(i), s2map.get(s2.charAt(i)) + 1);
            }
            else{
                s2map.put(s2.charAt(i), 1);
            }
        }
                
        if(s2map.size() < s1map.size()){
            
            for(Character a : s2map.keySet()){
                
                if(s1map.containsKey(a)){
                    count = Math.min(s1map.get(a), s2map.get(a));
                }
            }
        }
        else{
            for(Character a : s1map.keySet()){
                
                if(s2map.containsKey(a)){
                    count += Math.min(s1map.get(a), s2map.get(a));
                }
            }
        }
        
        return (s1.length() - count) + (s2.length() - count);
        
    }