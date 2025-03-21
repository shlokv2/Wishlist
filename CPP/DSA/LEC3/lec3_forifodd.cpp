#include<iostream>
using namespace std;
int main(){
    int i,n;
    n=10;
     int oddSum=0;
    for(i=0;i<=n;i++){
        if(i%2!=0){
            cout<<i<<" "<<endl ;
           
            oddSum+=i;
        }
    }
                cout<<oddSum<<endl;

    cout<<endl;
    return 0;
}