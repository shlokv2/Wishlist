import java.util.*;
public class cwh_07_ps1_02 {
public static void main(String srgs[]){
    float sub1, sub2, sub3;
Scanner sc=new Scanner(System.in);
System.out.print("Enter Math marks\n");
sub1=sc.nextFloat();
System.out.print("Enter Chem marks\n");
sub2=sc.nextFloat();
System.out.print("Enter Phy marks \n");
sub3=sc.nextFloat();
float cgpa=((sub1*4)+(sub2*3)+(sub3*2))/30;
System.out.println("Your CGPA is:" +cgpa);
}    
}
