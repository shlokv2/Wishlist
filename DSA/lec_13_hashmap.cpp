#include<map>
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // pre-compute
     map<int,int> mpp; // we can also use long or long long for more number of operations
     for(int i=0; i<n; i++){
        mpp[arr[i]]++;
     } // this loop is not compulsory.  the precompute steps can also be written inside the first loop. 
     // the time complexities with 2 loops would be N+N=2N which is considered 2N. note it wont be n*n=sq(n)

     // iterate in the map
     for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
     }

     // input queries:
     int q;
     cout<<"Enter the number of queries: ";
     cin>>q;
     while(q--){
         int number;
         
         cout<<"Enter the query: ";
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
     }
return 0;
}