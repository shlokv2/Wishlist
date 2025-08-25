import java.util.*;

public class cwh_07_practiceset1_01 {
public static void main (String args[]){
int a=10;
int b=34;
int c=25;
int sum=a+b+c;
System.out.println(sum);

//WAP to convert and give value in km to miles
float distanceInKm;
float distanceInMiles; //1 km= 0.621371miles
    System.out.println("Enter the distance in Kilometers: ");
    Scanner ax= new Scanner(System.in);
    distanceInKm=ax.nextFloat();
    distanceInMiles=(distanceInKm)*(0.621371f);
    System.out.println("The distance "+distanceInKm+" Km in miles is "+distanceInMiles);
}
    
}     
