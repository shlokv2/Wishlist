// import java.util.*;

// public class lec2 {
//     public static void LowerCase(String a){
//         boolean p;
//         if(a.hasLowerCase())
//         if(a==p)
        
//     }
//     public static void UpperCase(String a){

//     }
//     public static void Characters(String a){

//     }
//     public static void Number(String a){

//     }
//     public static void main(String[] args) {
//         Scanner str=new Scanner(System.in);
//         String pass;
//         pass="Swyam123";
//         LowerCase(pass);
//     }
// }


import java.util.*;

public class lec2 {

    // Check if string has at least one lowercase letter
    public static boolean hasLowerCase(String str) {
        for (char c : str.toCharArray()) {
            if (Character.isLowerCase(c)) {
                return true;
            }
        }
        return false;
    }

    // Check if string has at least one uppercase letter
    public static boolean hasUpperCase(String str) {
        for (char c : str.toCharArray()) {
            if (Character.isUpperCase(c)) {
                return true;
            }
        }
        return false;
    }

    // Check if string has at least one digit
    public static boolean hasNumber(String str) {
        for (char c : str.toCharArray()) {
            if (Character.isDigit(c)) {
                return true;
            }
        }
        return false;
    }

    // Check if string has at least one special character
    public static boolean hasSpecialChar(String str) {
        for (char c : str.toCharArray()) {
            if (!Character.isLetterOrDigit(c)) {
                return true;
            }
        }
        return false;
    }

    // Main method
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter password: ");
        String password = sc.nextLine();

        boolean lower = hasLowerCase(password);
        boolean upper = hasUpperCase(password);
        boolean number = hasNumber(password);
        boolean special = hasSpecialChar(password);

        if (password.length() >= 8 && lower && upper && number && special) {
            System.out.println("Password is strong!");
        } else {
            System.out.println("Password is weak. It must have:");
            if (password.length() < 8) System.out.println("- At least 8 characters");
            if (!lower) System.out.println("- At least one lowercase letter");
            if (!upper) System.out.println("- At least one uppercase letter");
            if (!number) System.out.println("- At least one number");
            if (!special) System.out.println("- At least one special character");
        }
    }
}
