#include<iostream>
using namespace std;
int main(){
    int i,n;
    n=10;
    int oddSum;
    i=0;
    while(i<=n){
        i++;
        if(i%2==0){
        oddSum+=i;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<"The sum is \n"<<oddSum;
    return 0;
}