#include <iostream>
using namespace std;
// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpID)
    {
        id = inpID;
        salary = 34.0;
    }
    // default constructor of
    Employee() {}
};

/* //Derived class syntax
class {{derived-class name}}:{{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
    note:
    1.default visibility mode is private
    2.public visibility mode: public members of the base class becomes public members of the base class
    3.private visibility mode: public members of the base class becomes private members of the base class
    4.Private members are never inherited
*/

// Creating a programmer class derived class from base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpID)
    {
        id = inpID;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(1);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl; // if we hadn't declared public in class name then we wouldn't be able to access private member(by default)
    skillF.getData();
    return 0;
}