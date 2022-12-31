
import java.util.*;

public class Solution3 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        int T = Integer.parseInt(sc.nextLine());
        
        for(int z = 1; z <= T; z++ ){
            
            String I = sc.nextLine();
            String P = sc.nextLine();
         
            if(I.length() > P.length()){
                System.out.println("Case #"+z+": IMPOSSIBLE");
                return;
            }

            Map<Character,Integer> map = new LinkedHashMap<>();
            Map<Character,Integer> map2 = new LinkedHashMap<>();
            for(int i = 0; i < I.length(); i++){
                if(map.containsKey(I.charAt(i))){
                    map.put(I.charAt(i),map.get(I.charAt(i))+1);
                }else {
                    map.put(I.charAt(i), 1);
                }
            }
            for(int i = 0; i < P.length(); i++){
                if(map.containsKey(P.charAt(i))){
                    map.put(P.charAt(i),map.get(P.charAt(i))-1);
                }else if( ! map2.containsKey(P.charAt(i))){
                    map2.put(P.charAt(i), 1);
                }
                else {
                    map2.put(P.charAt(i),map2.get(P.charAt(i))+1);
                }
                
            }

            Set<Character> keys = map2.keySet();
        
            for (Character key : keys) {
               if(map.get(key) > 0) {
                System.out.println("Case #z"+": IMPOSSIBLE");
                return;
               }
            }

            int count = 0;
            Set<Character> keys2 = map2.keySet();
        
            for (Character key : keys2) {
               count += map2.get(key);
            }

            System.out.println("Case #"+z+": "+count);
            
        }
    }
}
