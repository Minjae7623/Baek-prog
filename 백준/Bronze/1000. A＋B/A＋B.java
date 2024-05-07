import java.util.*;

public class Main{
    
    static int sum (int a, int b){
        return a + b;
    }
    
    public static void main(String [] args){
        Scanner scan = new Scanner(System.in);
        
        System.out.println(sum(scan.nextInt(), scan.nextInt()));
    }
}