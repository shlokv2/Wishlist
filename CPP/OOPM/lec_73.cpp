#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    // Creating a map where keys are strings and values are integers
    map<string, int> marksMap;

    // Inserting values using [] operator
    marksMap["harry"] = 98;
    marksMap["Kishan"] = 59;
    marksMap["Rohan"] = 12;

    // Inserting values using insert() method (corrected format)
    marksMap.insert({ {"Kozume", 169}, {"Kuroo", 200} });

    // Declaring iterator for the map
    map<string, int>::iterator iter;

    // Looping through the map and printing key-value pairs
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << iter->first << " " << iter->second << "\n"; 
    }

    // Displaying some properties of the map
    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max size is: " << marksMap.max_size() << endl;
    cout << "Is the map empty?: " << (marksMap.empty() ? "Yes" : "No") << endl;

    return 0;
}
