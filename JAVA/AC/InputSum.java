
import java.util.Scanner;

public class InputSum {
    public static void main(String args[]){
        int a, b;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the value of a");
        a=sc.nextInt();
        System.out.println("Enter the value of b");
        b=sc.nextInt();
        int sum=a+b; 
        System.out.println("The sum of a and b is\t"+sum);
 sc.close();
    }
}
