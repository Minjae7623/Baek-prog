import java.util.Scanner;

public class Main{
    static int multiply(int a, int b){
        return a * b;
    }
    
    public static void main(String []args){
        Scanner scan = new Scanner(System.in);
        
        System.out.println(multiply(scan.nextInt(), scan.nextInt()));
    }
}