#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> myMap = {
        {1, "Apple"},
        {2, "Banana"},
        {3, "Cherry"}
    };

    for (const auto& [key, value] : myMap) {  // ✅ C++17 structured binding
        cout << key << " -> " << value << endl;
    }

    return 0;
}
