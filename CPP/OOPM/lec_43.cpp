#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?\n";
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?\n";
    }
};

class Derived : public Base1, public Base2
{
    int a;
    // now to resolove ambiguity
public:
    void greet()
    {
        Base1::greet();
    }
};

class B
{
public:
    void say(){
        cout<<"Hello World\n";
    }
};
class D:public B
{
    int a;
    //D's new say method will ovveride base class's say()method
public:
    void say(){
        cout<<"Hello my beautiful ppl\n";
    }
};
int main()
{
    // Ambiguity1
    //  Base1 base1obj;
    //  Base2 base2obj;
    //  base1obj.greet();
    //  base2obj.greet();
    //  Derived d;
    //  d.greet();
    /*
    error: member 'greet' found in multiple base classes of different types
    d.greet();
      ^
lec_43.cpp:7:10: note: member found by ambiguous name lookup
    void greet()
         ^
lec_43.cpp:15:10: note: member found by ambiguous name lookup
    void greet()
         ^
1 error generated.
    */


    //Ambiguity 2
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}