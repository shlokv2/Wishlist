#include <iostream>
using namespace std;
/*
 Syntax for inheriting in multiple inheritance
class Derived:visibility-mode base1, visibility-,mode base2
{
Class body of class "DerivedC"
}
*/
class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int=a;
    }
};
class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int=a;
    }
};
class Base3{
    protected:
    int base3int;
    public:
    void set_base3int(int a){
        base3int=a;
    }
};

class Derived: public Base1, public Base2, public Base3{
    public:
    void show(){
        cout<<"The value of Base1 is \n"<<base1int<<endl;
        cout<<"The value of Base2 is \n"<<base2int<<endl;
        cout<<"The value of Base3 is \n"<<base3int<<endl;
        cout<<"The sum of these values is \n"<<base1int+base2int+base3int<<endl;

    }
};
/*
the inherited derived class will look something like this:
Data members:
base1int ---> protected
base2int ---> protected
Member functions:
set_base1int() -->Protected
set_base2int() -->Protected
set_show() -->Protected
*/
int main()
{
    Derived shlok;
    shlok.set_base1int(25);
    shlok.set_base2int(5);
    shlok.set_base3int(10);
    shlok.show();
    return 0;
}