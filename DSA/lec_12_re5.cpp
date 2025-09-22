#include<iostream>
using namespace std;
int fibonnaci(int n){
    if(n<=1){
        return n;
    }
    int last, slast;
    last=fibonnaci(n-1);
    slast=fibonnaci(n-2);
    return last+ slast;
}
int main(){
    int n;
    cout<<"Enter the fibonacci place "<<endl;
    cin>>n;
    cout<<fibonnaci(n)<<" \t";
return 0;
}