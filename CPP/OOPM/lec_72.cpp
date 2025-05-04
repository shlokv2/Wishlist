#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
    list<int>:: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++) // runs from start to the end of the list
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    // 6 7 8 9
    // Inserting elements in an empty list
    list<int> list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);
    // removing elements
    list1.pop_back(); // deletion from back
    display(list1);
    list1.pop_front(); //Deletion from front
    display(list1);
    list1.remove(1); // Removes the specific element even if they are occuring multiple times
    display(list1);
    
    // list<int> :: iterator iter;
    // iter=list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    
    // Insterting elements in an empty list of size 3
    list<int> list2(3); //Empty list of size 3
    list<int>:: iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=6;
    iter++;
    *iter=9;
    iter++;
    display(list2);

    cout<<"\nSorting list 2: ";
    list2.sort(); // Sorts the list in ascending order
    display(list2);

    cout<<"\nMerging list 1 and 2: ";
    list1.merge(list2);
    display(list1);

    cout<<"\nReversing the list: ";
    list1.reverse();
    display(list1);
return 0;
}