#include <iostream>
using namespace std;

void RevArray(int a[], int l, int r)
{
    if (l >= r)
    {
        return; // base case
    }
    swap(a[l], a[r]);          // swap elements
    RevArray(a, l + 1, r - 1); // recursive call
}

void RevArraySP(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    RevArraySP(i + 1, arr, n);
}

bool Palindrome(string s, int i)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return Palindrome(s, i+1);    
}

int main()
{
    int n = 4;
    // cin>>n;
    int a[4] = {1, 2, 3, 4};

    cout << "Original array TP: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    RevArray(a, 0, n - 1);

    cout << "Reversed array SP: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
   

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    RevArraySP(0, arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

        cout<<endl;
     
        string s;
        cout<<"Enter a word to check if it is palindrone \n";
        cin>>s;
   cout<< Palindrome(s,0);
        return 0;
}
