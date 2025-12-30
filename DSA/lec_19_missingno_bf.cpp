#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to find the missing number in the array
    int missingNumber(vector<int>& a, int N) {
        // Loop through numbers from 1 to N
        for (int i = 1; i <= N; i++) {
            int flag = 0; // To check if i exists in array

            // Linear search to check if i is in the array
            for (int j = 0; j < N - 1; j++) {
                if (a[j] == i) {
                    flag = 1; // i is found
                    break;
                }
            }

            // If i was not found, it is the missing number
            if (flag == 0) return i;
        }

        // Control should never reach here
        return -1;
    }
};

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};

    Solution obj;
    int ans = obj.missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;

    return 0;
}
