
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int a, b;

public:
    void input()
    {
        cout << "Enter two integers: ";
        cin >> a >> b;
    }

    void performSimpleOperations()
    {
        cout << "\nSimple Calculator Operations:" << endl;
        cout << "Addition: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multiplication: " << a * b << endl;
        cout << "Subtraction: " << a / b << endl;
    }
};

class ScientificCalculator
{
protected:
    int a, b;

public:
    void input()
    {
        cout << "\nEnter two integers (again for scientific operations): ";
        cin >> a >> b;
    }

    void performScientificOperations()
    {
        cout << "\nScientific Calculator Operations:" << endl;
        cout << "Power (a^b): " << pow(a, b) << endl;
        cout << "Square root of a: " << sqrt(a) << "    Square root of b: " << sqrt(b) << endl;
        cout << "Logarithm of a: " << log(a) << "   Logarithm of b: " << log(b) << endl;
        cout << "Sine of a (in radians): " << sin(a) << "Sine of b (in radians): " << sin(b) << endl;
    }
};

// Multiple inheritance
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void performAll()
    {
        SimpleCalculator::input();
        SimpleCalculator::performSimpleOperations();

        ScientificCalculator::input();
        ScientificCalculator::performScientificOperations();
    }
};

int main()
{
    HybridCalculator calc;
    calc.performAll();

    return 0;
}
