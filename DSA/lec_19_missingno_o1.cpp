#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to find the missing number using sum formula
    int missingNumber(vector<int>& a, int N) {
        // Sum of first N natural numbers using formula: N*(N+1)/2
        int sum = (N * (N + 1)) / 2;

        // Sum of elements present in the array
        int s2 = 0;
        for (int i = 0; i < N - 1; i++) {
            s2 += a[i];
        }

        // The missing number is the difference between expected and actual sum
        return sum - s2;
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
