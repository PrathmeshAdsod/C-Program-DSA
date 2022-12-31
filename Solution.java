
//Congrats this code passed in Google Kick Start Interesting Integers
// But Samle 1 is passed and in 2nd sample it is passing but gave TLE

import java.util.*;

public class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        int T = sc.nextInt();
        
        for(int z = 1; z <= T; z++ ){
            
           long num = sc.nextLong();
           long sec_num = sc.nextLong();

           long numbers = 0;

           for(long k = num; k <= sec_num; k++){
            long num2 = k;
            long mod = 0;
            long mul = 1;
            long sum = 0;
            while(num2 > 9) {
                 mod = num2%10;
                 num2 = num2/10;
                 mul *= mod;
                 sum += mod;
            }
            mul = mul*num2;
            sum = sum+num2;
 
            if(mul%sum == 0) numbers++;
           }
           System.out.println("Case #"+z+": "+numbers);
            
        }
    }
}
/*public class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        int T = sc.nextInt();
        
        for(int z = 1; z <= T; z++ ){
            
           int num = sc.nextInt();
           int sec_num = sc.nextInt();

           int numbers = 0;

           for(int k = num; k <= sec_num; k++){
            int num2 = k;
            int mod = 0;
            int mul = 1;
            int sum = 0;
            while(num2 > 9) {
                 mod = num2%10;
                 num2 = num2/10;
                 mul *= mod;
                 sum += mod;
            }
            mul = mul*num2;
            sum = sum+num2;
 
            if(mul%sum == 0) numbers++;
           }
           System.out.println("Case #"+z+": "+numbers);
            
        }
    }
}*/