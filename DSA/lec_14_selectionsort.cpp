#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i <=n - 2; i++){
        int mini = i;
        for(int j = i; j < n-1; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
void bubble_sort(int arr[], int n){
    for(int i=n-1; i<=1;i++){
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]= temp;
            }
        }
    }
}
void bubble_sort_optimized(int arr[], int n){
    for(int i=n-1; i<=1;i++){
        int didSwap=0;
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]= temp;
            didSwap=1;
            }
        }
        if(didSwap==0){
            break;
        }
        cout<<"runs\n"; //to check how many times it runs
    }
}
void insertion_sort(int arr[], int n) {
    for(int i = 0; i <= n-1; i++) {       
        int j = i;                       // j points to current element
        while(j > 0 && arr[j-1] > arr[j]) {
            int temp = arr[j-1];         // swap arr[j-1] and arr[j]
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;                         // move left to continue checking
        }
    }
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    cout << "Sorted array using bubble sort is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
