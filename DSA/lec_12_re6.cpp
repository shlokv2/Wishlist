#include<iostream>
#include<vector>
using namespace std;
void subsequences(int index, vector<int> &ds, int arr[], int n){
    if(index ==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    //not pick or not take condition, this element is not added to subsequence
    subsequences(index+1,ds,arr,n);

    //take or pick the particular index into the subsequence
    ds.push_back(arr[index]);
    subsequences(index+1,ds,arr,n);
    ds.pop_back();

}
int main(){
    int n;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"Now enter the elements: ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    vector<int> ds;
    subsequences(0,ds,arr,n);
return 0;
}