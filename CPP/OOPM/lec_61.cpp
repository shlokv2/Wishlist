#include <iostream>   // For input and output operations (cout, cin)
#include <fstream>    // For file handling (ofstream, ifstream)
using namespace std;

int main()
{
    // Connecting our file with "hout" output stream
    ofstream hout("sample60.txt");   // 'hout' is an object to write to the file 'sample60.txt'

    // Creating a name string and filling it with the string entered by the user
    cout << "Enter your name: "  ;
    string name;                   // 'name' will store the user's input
    getline(cin , name);                   // Taking input from the user (Full name)

    // Writing the name string to the file
    hout << "User is " << name;    // Writing formatted string to the file (fixed earlier)
    cout << name;                  // Also displaying the entered name on the console

    hout.close();                  // Closing the output file stream after writing

    cout << endl;                  // Adding a blank line for better readability
    cout << endl;                  // Another blank line

    // Connecting our file with "hin" input stream
    ifstream hin("sample60.txt");   // 'hin' is an object to read from the file 'sample60.txt'

    string content;                // 'content' will be used to store file content during reading

    hin >> content;                // Reading the first word (up to whitespace) from the file
    cout << "The content of this file is: " << content;  // Displaying the first word read

    getline(hin, content);          // Reading the rest of the line after the first word
    cout << content << "\n";        // Displaying the remaining content read

    hin.close();                    // Closing the input file stream after reading

    return 0;                       // Indicating successful program termination
}
