#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    
    // PreCompute
    // int hash[26]={0}; //for lowercase
    int hash[256]={0}; //for both
    
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }
    int q;
    cout<<"Enter queries: ";
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        // Fetch
        cout<<"Number of appearances for the query is: "<<hash[c]<<endl;
    }
return 0;
}