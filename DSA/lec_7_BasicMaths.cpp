#include <iostream>
#include <cmath>
using namespace std;
void countDigits()
{
    // extraction of digits
    int n, x;
    cout << "Enter a number: " << endl;
    cin >> n;
    x = n;
    int count = 0;
    cout << "Extracted digits of " << n << " In reverse order is as follows: " << endl;
    while (n > 0)
    {
        int lastDigit = n % 10;
        cout << lastDigit << endl;
        n = n / 10;
        count += 1;
    }
    cout << "the number of digits in " << x << " is " << count << endl;
    // also, if you want to find the number of digits, you can also do it this way
}
int countDigits1(int n)
{
    int count = (int)(log10(n) + 1);
    cout << "the number of digits in " << n << " is " << count << endl;
    return count;
}

void reverseNumber()
{
    int n;
    cout << "Enter a number " << endl;
    cin >> n;
    int revNum = 0;
    int lastdigit;
    while (n > 0)
    {
        lastdigit = n % 10;
        n = n / 10;
        revNum = revNum * 10 + lastdigit;
    }
    cout << "The reversed number is: " << revNum << endl;
}

void palindrome()
{
    int n;
    cout << "Enter a number " << endl;
    cin >> n;
    int duplicate;
    duplicate = n;
    int revNum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        revNum = revNum * 10 + lastdigit;
    }
    if (duplicate == revNum)
    {
        cout << duplicate << " is a palindrome" << endl;
    }
    else
    {
        cout << duplicate << " is not a palindrome" << endl;
    }
}

void armstrongNumber()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    int dup = n;
    int digits = 0;

    // Step 1: Count number of digits
    int temp = n;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    // Step 2: Compute sum of each digit raised to 'digits' power
    int sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, digits);
        n /= 10;
    }

    // Step 3: Compare
    if (sum == dup)
        cout << dup << " is an Armstrong Number" << endl;
    else
        cout << dup << " is not an Armstrong Number" << endl;
}

int main()
{
    // countDigits();
    // int x;
    // cout << "Enter another number: " << endl;
    // cin >> x;
    // countDigits1(x);
    // float p;
    // p=log10(x);
    // cout<<"\n"<<p<<endl;
    // cout<<(int)(p);

    // reverseNumber();
    // palindrome();
    armstrongNumber();
    return 0;
}