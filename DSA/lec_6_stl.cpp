#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <utility>
#include <iterator>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>

// #include<bits/stdc++.h>

using namespace std;
// containers
void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;
    // nested pair
    pair<int, pair<int, int>> s = {1, {3, 4}};
    cout << s.second.first; // 3
    // Array of pair
    pair<int, int> arr[] = {{1, 3}, {2, 5}, {7, 4}};
    cout << arr[1].second; // 5
}
void explainVector()
{
    vector<int> v = {0, 1, 3, 4, 7, 4, 9, 6};
    vector<int> v1;
    v1.push_back(1);    // This creates an element "1 here" and then copies it to the vector
    v1.emplace_back(2); // This directly constructs or creates the element "2 here" thus making it faster

    vector<pair<int, int>> v2;
    v2.push_back({1, 2});
    v2.emplace_back(7, 12); // Here using emplace, it automatically detects what the input is (no need of {})

    vector<int> v3(5, 100); // The vector stores 100, 100, 100, 100, 100

    vector<int> v4(5);  // The vector stores 0 0 0 0 0
    v4.emplace_back(7); // The vector now stores 0 0 0 0 0 7, making v4(6)

    vector<int> v5(5, 20);
    vector<int> v6(v5);

    // Accessing elements in a vector
    cout << v[2] << endl; // "or"cout<<v.at[2];
    cout << v.back() << endl;

    // Accessing elements in a vector using iterator
    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";
    vector<int>::iterator itx = v.end();

    // vector<int>::iterator it=v.rend(); reverse end _(0,...,6)
    //  _represents iterator
    // vector<int>::iterator it=v.rbegin(); reverse begin (_6,...,0)

    // PRINTING vector using for loop
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    for (auto element : v)
    {
        cout << *(it) << " ";
    }

    // Deleting elements
    // {10, 20, 12, 23}
    v.erase(v.begin() + 1);

    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4); // {10, 20, 35} [ start, end]

    // Insert function
    vector<int> v7(2, 100);           //{100,100}
    v7.insert(v7.begin(), 300);       //{300,100,100}
    v7.insert(v7.begin() + 1, 2, 10); // {300,10,10,100,100}
    v7.insert(v7.end(), {1, 2, 3});   // {300,10,10,100,100,1,2,3}

    vector<int> v8(2, 50);
    v7.insert(v7.begin() + 3, v8.begin(), v8.end());

    // {300,10,10,50,50,100,100,1,2,3}
    cout << endl;
    cout << "Vector V7 consists of: ";
    for (int y : v7)
    {
        cout << y << ", ";
    }
    cout << v7.size(); // 10

    v7.pop_back(); // Pops out 300

    // v6 -> {20, 20, 20, 20, 20}
    // v7 -> {300,10,10,50,50,100,100,1,2,3}
    v6.swap(v7); // v6 --> {300,10,10,50,50,100,100,1,2,3} , v7 --> {20, 20, 20, 20, 20}

    v.clear(); // Erases the entire vector

    cout << "\n"
         << v.empty(); // Return 1 for true and 0 for false
}
void explainList()
{
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5);   // {5, 2, 4}
    ls.emplace_front(); // {0, 5, 2, 4}
    for (int a : ls)
    {
        cout << a << " ";
    }
    /*
    Rest of the functions are same as vector
    begin end rbegin rend clear insert size swap
    */
}
void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1,2}
    dq.push_front(4);    // {4,1,2}
    dq.emplace_front(3); // {3,4,1,2}
    dq.pop_back();       // {3, 4, 1}
    dq.pop_front();      // {4, 1}
    dq.back();           // accesses last element using reference
    dq.front();          // accesses first element using reference
    for (int a : dq)
        cout << a << " ";
    /*
    Rest of the functions are same as vector
    begin end rbegin rend clear insert size swap
    */
}
void explainStack()
{
    stack<int> st;
    st.push(1);    // {1}
    st.push(2);    // {2,1}
    st.push(3);    // {3,2,1}
    st.push(3);    // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout << st.top() << endl; // prints 5 "st[2] is invalid, no indexing"

    st.pop(); // {3,3,2,1}

    cout << st.top() << endl;   // 3
    cout << st.size() << endl;  // 4
    cout << st.empty() << endl; // false(0)

    stack<int> st1, st2;
    st1.swap(st2);
}
void explainQueue()
{
    queue<int> q;
    q.push(1);    // {1}
    q.push(2);    // {1,2}
    q.emplace(4); // {1,2,4}

    q.back() += 5;
    cout << q.back() << endl; // prints 9

    // Q is {1,2,9}
    cout << q.front() << endl; // prints 1
    q.pop();                   // {2,9}

    cout << q.front() << endl; // prints 2

    // size swap empty same as stack
}
void explainPQ()
{
    priority_queue<int> pq;
    // Note this is Max heap
    pq.push(5);       // {5}
    pq.push(2);       // {5,2}
    pq.push(8);       // {8,5,2}
    pq.emplace(10);   // {10,8,5,2}
    cout << pq.top(); // prints 10

    pq.pop();         // {8,5,2}
    cout << pq.top(); // prints 8

    // size swap empty functions same as others

    // Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);     // {5}
    pq1.push(2);     // {2,5}
    pq1.push(8);     // {2,5,8}
    pq1.emplace(10); // {2,5,8,10}

    cout << pq1.top(); // prints 2
}
void explainSet()
{
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1,2}
    st.insert(2);  // {1,2}
    st.insert(4);  // {1,2,4}
    st.insert(3);  // {1,2,3,4}

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin() end() rebegin() rend() size()
    // empty() swap() are same as above

    //{1,2,3,4,5}
    auto it = st.find(3);

    //{1,2,3,4,5}
    auto it0 = st.find(6); // returns iterator to the end (after 5)

    //{1,4,5}
    st.erase(5); // Erases 5 // takes logarithmic logic

    int cnt = st.count(1); // if it exists, returns 1 else 0

    auto it1 = st.find(3);
    st.erase(it); // it takes constant time

    //{1,2,3,4,5}
    auto it2 = st.find(2);
    auto it3 = st.find(4);
    st.erase(it2, it3); // after erase {1,4,5} [First, last) // similar to vector

    // lower_bound() and upper_bound() function works in the same way as in in vector

    // This is the sntax
    auto it4 = st.lower_bound(2);
    auto it5 = st.upper_bound(4);
}
void explainMultiSet()
{
    // Everything is same as set
    // only stores duplicate elememts also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // erases all the 1's

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find((1) + 2));

    // rest all functions same as set
}
void explainUSet()
{
    unordered_set<int> st;
    // lower_bound and upper_bound function does not work
    // rest all functions are same as above
    // it does not store in any particular order
    // it has better complexity than set in most cases
    // except when collision occurs
}
void explainMap()
{
    // map<int, int> mpp;            // 1 way
    // map<int, pair<int, int>> mpp; // 2nd way
    // map<pair<int, int>, int> mpp; // 3rd way and so on

    // mpp[1] = 2;
    // mpp.emplace({3, 1});

    // mpp.insert({2, 4});

    // mpp[{2, 3}] = 10;

    map<int, int> mpp;             // 1st way
    map<int, pair<int, int>> mpp2; // 2nd way
    map<pair<int, int>, int> mpp3; // 3rd way (for pairs as keys)

    mpp[1] = 2;                   // ✔ valid
    mpp.emplace(make_pair(3, 1)); // ✔ preferred way
    // mpp.insert({2, 4});                 // ✔ valid
    mpp.insert(make_pair(2, 4)); // ✅ Always works

    mpp3[{2, 3}] = 10; // ✔ valid with pair<int,int> as key

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl; // it.first is key and it.second is value
    }

    cout << mpp[1]; // returns 2
    cout << mpp[5]; // does not exist so returns null/zero/garbage

    auto it = mpp.find(3);
    // cout<<*(it).second;  //shows squiggly lines below second
    cout << (*it).second; // derefencing
    // cout<<it->second; another(preferred)way using arrow operator

    auto itw = mpp.find(5); // points to the end

    // This is the syntax
    auto itx = mpp.lower_bound(2);

    auto ity = mpp.upper_bound(3);

    // erase, swap, size, empty, etc are all the same›
}
void explainMultiMap()
{
    // everything same a map, only it can store multiple keys
    // only [mpp] key cannot be used here
}
void explainUnorderedMap()
{
    // same as set and unordered_set difference
    // unique keys
}

// algorithms
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    // they are same then we move on to the second condiiton
    if (p1.first > p2.first)
        return true;
    return false;
}
void explainExtra()
{
    int a[] = {5, 1, 4, 3, 2};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);
    cout << "Sort1 Result: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    vector<int> v;
    v = {1, 5, 8, 9, 4, 3};
    sort(v.begin(), v.end());
    cout << "Sort2 Result: " << endl;
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    sort(a + 2, a + 4);
    cout << "Sort3 Result: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    sort(a, a + n, greater<int>());
    cout << "Sort4 Result: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    pair<int, int> b[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending order

    sort(b, b + 3, comp);
    cout << "Sort5 Answer: " << endl;
    for (auto x : b)
    {
        cout << "{" << x.first << "," << x.second << "}" << " ";
    }
    cout << endl;

    int num1 = 7;                       // 7 in binary is 111
    int cnt = __builtin_popcount(num1); // this will return the number of 1's in binary 32 bit
                                        // 000000000000...111

    long long num2 = 1657786578687;
    int cnt = __builtin_popcount(num2);

    string s = "123";
    sort(s.begin(), s.end()); // we sort it first before permutation because if the number was 231,
                              // it would give us 3 permutations while with 123 it would give us 6 permutations
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); // This will return all the possoble permutations for the given number 123

    int maxi = *max_element(a, a + n); // returns the max element from an array (say) and then derefrences it
}
int main()
{
    explainExtra();
    return 0;
}