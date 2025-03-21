#include <iostream>
using namespace std;

int main(){
    int n = 50, sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
        if (i == 5) {
            break;
        }
    }
    cout << "sum = " << sum << endl;  // Print sum instead of i
}
