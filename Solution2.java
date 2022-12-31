import java.util.*;
public class Solution2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        int T = Integer.parseInt(sc.nextLine());
        
        for(int z = 1; z <= T; z++ ){
            
            String I = sc.nextLine();
            String P = sc.nextLine();
         
            int i = 0;
            int j = 0;
            int n = I.length()-1;
            int m = P.length()-1;
            
            int total_delete = 0;
            boolean flag = false;
            while(i <= n || j <= m) {
                
                if(n > m){
                    flag = true;
                    
                    break;
                }
                
                if(i <= n && j <= m && I.charAt(i) != P.charAt(i)){
                    total_delete++;
                    j++;
                }else if(i <= n && j <= m && I.charAt(i) == P.charAt(i)){
                    i++;
                    j++;
                }else if(i == n && j != m) {
                    flag = true;
                    break;
                }else if(j == m && i != n){
                    i++;
                    total_delete++;
                }
            }
            
            
            if(flag) {
                System.out.println("Case #"+z+": IMPOSSIBLE");
            }else {
                System.out.println("Case #"+z+": "+total_delete);
            }
            
        }
    }
}
