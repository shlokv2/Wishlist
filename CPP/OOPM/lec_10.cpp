#include <iostream>

using namespace std;
int main()
{
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

    /*For loop in C++*/
    // int i=1;
    // cout<<i;
    // i++;

    // Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // for (int i = 1; i <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    /*While loop in C++*/
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    //  Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    /* do While loop in C++*/
    // Syntax:
    // do
    // {
    //     C++ statements;
    // }while(condition);

    //  Printing 1 to 40 using while loop
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(false);

    // quiz- print table of 6
    //  for(int i=0; i<=10; i++){
    //      int n=6;
    //      cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    //  }



    // int i = 1;
    // while (i <= 10)
    // { // note initialization is not done in the while CONDITION so initialize int i=0 or 1 before!
    //     int n = 7;
    //     cout << n << " * " << i << " = " << n * i << endl;
    //     i++;
    // }

    int n=10;
    int i=1;
    do{
       
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    }
    while(i<=10);
    return 0;
}
