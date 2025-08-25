import java.util.Scanner;

public class java_practice_rust{
    public static void main (String []args){
        System.out.println("Enter two numbers:-");
        Scanner sc1=new Scanner(System.in);
        System.out.println("1.Enter the first number");
        
         float a, b;
          a=sc1.nextFloat();
          System.out.println("2.Enter the second number");
          b=sc1.nextFloat();
        float sum=a+b;
          System.out.println("The addition of " +a+ "and "+b+ "is " +sum);
          float sub=a-b;
          System.out.println("The subtraction of " +a+ "and "+b+ "is " +sub);
          float mul=a*b;
          System.out.println("The multiplication of " +a+ "and "+b+ "is " +mul);
          float div=a/b;
          System.out.println("The division of " +a+ "and "+b+ "is " +div);

    }
}
