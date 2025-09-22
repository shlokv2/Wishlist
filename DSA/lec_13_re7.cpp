#include <iostream>
#include <vector>
using namespace std;
void printSwhoseSumIsK(int index, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (index == n)
    {
        if (s == sum){
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    // the take condition
    ds.push_back(arr[index]);
    s += arr[index];
    printSwhoseSumIsK(index + 1, ds, s, sum, arr, n);

    s -= arr[index];
    ds.pop_back();
    // the not take condition
    printSwhoseSumIsK(index + 1, ds, s, sum, arr, n);
}

bool printSwhoseSumEqualsSum(int index, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (index == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
       else return false;
    }
    // the take condition
    ds.push_back(arr[index]);
    s += arr[index];
    if (printSwhoseSumEqualsSum(index + 1, ds, s, sum, arr, n) == true)
    {
        return true;
    }

    s -= arr[index];
    ds.pop_back();
    // the not take condition
    if (printSwhoseSumEqualsSum(index + 1, ds, s, sum, arr, n) == true)
    {
        return true;
    }
    else
        return false;
}

int CountSwhoseSumEqualsK(int index,  int s, int sum, int arr[], int n)
{
    if(s>sum )return 0; //condition not satisfied. Note that this is done to optimise TC slightly
                        //Strictly done if array contains positives only
    if (index == n)
    {
        if (s == sum)
        {
            return 1; //condition satisfied
        }
       else return 0; // condition not satisfied
    }
    // the take condition
    s += arr[index];

    int l=CountSwhoseSumEqualsK(index + 1,  s, sum, arr, n) ;
    
    s -= arr[index];

    // the not take condition
    int r=CountSwhoseSumEqualsK(index + 1,  s, sum, arr, n) ;
    return l+r;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;

    cout<<"Printing subsequences whose sum is K"<<endl;
    printSwhoseSumIsK(0, ds, 0, sum, arr, n);

    cout<<"Printing any subsequence whose sum is Sum"<<endl;
    printSwhoseSumEqualsSum(0, ds, 0, sum, arr, n);

    cout<<"Counting Subsequence whose sum=K"<<endl;
    cout<<CountSwhoseSumEqualsK(0, 0, sum, arr, n)<<endl;

    return 0;
}