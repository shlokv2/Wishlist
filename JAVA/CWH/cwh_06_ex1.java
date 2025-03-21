import java.util.*;
public class cwh_06_ex1{
public static void main(String args[]){
    System.out.println("Enter your marks");
    float maths, chemistry, physics, english, pe;
Scanner sc=new Scanner(System.in);
System.out.println("Enter Maths marks ");
maths=sc.nextFloat();
System.out.println("Enter Chemistry marks");
chemistry=sc.nextFloat();
System.out.println("Enter Physics marks");
physics=sc.nextFloat();
System.out.println("Enter English marks");
english=sc.nextFloat();
System.out.println("Enter Physical Education marks");
pe=sc.nextFloat();

float sum=(maths+chemistry+physics+english+pe)/5;
System.out.println("Your percentage is: "+sum);
}
}