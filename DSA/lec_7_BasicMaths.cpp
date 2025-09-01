#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
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
void printAllDivisors()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    vector<int> ls;
    // 6* 6<=36
    // 7 * 7 <=36 false
    // O(sqrt(n))
    for (int i = 1; i * i <= n; i++)
    { // i<=sqrt(n) but more computational as it is a function in c++ itself
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    // O (no of factors * log(no of factors)): n is the number of factors
    sort(ls.begin(), ls.end());
    // O(number of factors)
    for (int y : ls)
        cout << y << " ";
}
void checkForPrime()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;

            if ((n / i) != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
        cout << "True";
    else
        cout << "False";
}
void gcd()
{
    int n1;
    cout << "Enter a number: " << endl;
    cin >> n1;
    int n2;
    cout << "Enter a number: " << endl;
    cin >> n2;
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            cout << i;
            break;
        }
    }
}
void gcdEuclideanAlgorithm()
{
    int n1;
    cout << "Enter a number: " << endl;
    cin >> n1;
    int n2;
    cout << "Enter a number: " << endl;
    cin >> n2;
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1;
        }
    }
    if (n1 == 0)
        cout << n2;
    else
        cout << n1;
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
    // armstrongNumber();
    // printAllDivisors();
    // checkForPrime();
    gcdEuclideanAlgorithm();
    return 0;
}