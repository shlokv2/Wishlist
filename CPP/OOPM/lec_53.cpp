#include<iostream>
using namespace std;

class A{
    int a;
    public:
     void setData(int a ){
    // A & setData(int a ){
        //a=a; will give garbage value
        this->a=a;
        // return *this;
    }
    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }
};

int main(){
    //this is a keyword which is a pointer which points to the object which invoked the member function
A a;
// a.setData(4).getData();  CHAINING
// a.setData(4).getData();
a.setData(4);
a.getData();
return 0;
}