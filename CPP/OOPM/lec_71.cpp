#include <iostream>
#include <vector>
using namespace std;
template<typename T>
void display(vector<T> &v){
    cout<<"Displaying this vector"<<endl;
    for(int i= 0; i<v.size(); i++){
        cout<<v[i]<<" \t";
        // cout<<v.at(i)<<" \t"; //Access element
    }
}
int main()
{
    // ways to create a vector
    vector<int> vec1; //zero length vector
    vector<char> vec2(4); // 4-element charatcter vector
    // vector<char> vec3(vec2); // 4-element charatcter vector from vector2
    // vector<int> vec4(6,3); // 6-element vector of 3s
    vec2.push_back('5');
    // display(vec4);

    int element, size=5; 
    // cout<<"Enter the size of the vector"<<endl;
    // cin>>size;
    // for(int i=0; i<size; i++){
    //     cout<<"Enter an element to add to this vector ";
    //     cin>>element;
    //     vec1.push_back(element); //this adds an element
    // }
    // vec1.pop_back(); // this removes one element from the vector

    // vector<int>vec2;
    // display(vec1);
    // vector<int> ::iterator iter=vec1.begin();


    // vec1.insert(iter ,566); // inserts 566 at the beginning
    // vec1.insert(iter+1 ,566); // inserts 566 after 1
    // vec1.insert(iter+1,10 ,566); // inserts 566 after 10 times after 1
    // display(vec1);

    vector<int> vec4(4,13);
    display(vec4);
    cout<<vec4.size();
    return 0;
}