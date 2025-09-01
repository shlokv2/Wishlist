#include<iostream>
using namespace std;
int count1=0;
void f(){
    if(count1==3){
        return;
    }
    cout<<count1;
    count1++;
    f();
}
int main(){
    f();
}