
public class lec1{
  public static void  New(){
    int n='a';

    // int b=11;
    // return n;
    System.out.println(+n);   
  }
  public static void pattern(int n){

     for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            System.out.print(+j+" ");
        }
        System.out.println();
    }
  }
    public static void main (String []args){
     // New();
     int n=4;
     
      pattern(n);
    }
  }

















  // System.out.println("Enter two numbers:-");
  // Scanner sc1=new Scanner(System.in);
  // System.out.println("1.Enter the first number");
  
  //  float a, b;
  //   a=sc1.nextFloat();
  //   System.out.println("2.Enter the second number");
  //   b=sc1.nextFloat();
  // float sum=a+b;
  //   System.out.println("The addition of " +a+ "and "+b+ "is " +sum);
  //   float sub=a-b;
  //   System.out.println("The subtraction of " +a+ "and "+b+ "is " +sub);
  //   float mul=a*b;
  //   System.out.println("The multiplication of " +a+ "and "+b+ "is " +mul);
  //   float div=a/b;
  //   System.out.println("The division of " +a+ "and "+b+ "is " +div);
