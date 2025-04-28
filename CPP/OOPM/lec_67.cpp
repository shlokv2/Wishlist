#include <iostream>
using namespace std;

// float funcAverage1(int a, int b){
//     float avg=(a+b)/2.0;
//     return avg;
// };
// float funcAverage2(int a, float b){
//     float avg=(a+b)/2.0;
//     return avg;
// };

template <class T>
void swap1(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
// FUNCTION TEMPLATE
template <typename T1, typename T2>
float funcAverage3(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
};

int main()
{
    float a;
    a = funcAverage3(5, 2);
    printf("The average of these numbers is %.3f \n", a);

    int x = 5, y = 7;
    swap1(x, y);
    cout << x << endl
         << y << endl;
    return 0;
}