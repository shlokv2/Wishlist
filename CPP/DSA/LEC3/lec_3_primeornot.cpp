#include<iostream>
using namespace std;
int main(){

int i,n;

cout<<"Enter a number\n";
cin>>n;
bool isPrime=true;

for(i=2;i<=n-1;i++){
if(n%2==0){
    isPrime=false;
    break;
}
}
if(isPrime==true){
    cout<<n<<" is prime\n";
}
    else{
        cout<<n<<" is not prime\n";
    }
    return 0;
}

/* better approach:i*i
#include<iostream>
using namespace std;
int main(){

int i,n;

cout<<"Enter a number\n";
cin>>n;
bool isPrime=true;

for(i=2;i<=n-1;i++){
if(n%2==0){
    isPrime=false;
    break;
}
}
if(isPrime==true){
    cout<<n<<" is prime\n";
}
    else{
        cout<<n<<" is not prime\n";
    }
    return 0;
}


*/