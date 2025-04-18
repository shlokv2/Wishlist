#include<iostream>
using namespace std;

class Base{

protected:   
 int a; 
private:
int b;
};
/*for a protected member:
                       Public Derivation     Private Derivation     Protected Derivation
1.Private members       Not Inherited         Not Inherited          Not Inherited   
1.Protected members     Protected             Private                Protected
1.Public members        Public                Private                 Protected
*/
class Derived: protected Base{
    
};
int main(){
Base b;
Derived d;
//cout<<d.a; will not work since a is protected in both base and derived classes
return 0;
}