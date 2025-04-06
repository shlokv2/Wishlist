// // create a function which takes two point objects and computes the distance between those two points
// // Hint :make it a friend function
// #include <iostream>
// #include <cmath>
// using namespace std;
// class point
// {
//     int x, y;
//     friend void distance(point o1, point o2); //friend fn declaration

// public:
//     point(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
//     void display()
//     {
//         cout << "(" << x << "," << y << ")" << endl;
//     }
// };
// void distance(point o1, point o2) //this is a void function named distance and not a class
// {
//     float dist;
//     dist = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
//     cout << dist << endl;
// }
// int main()
// {
    
//     point p(4, 8);
//     p.display();
//     point q(2, 4);
//     q.display();
//     distance(p, q);

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

class point {
    int x, y;

    // Friend function declaration
    friend void distance(point o1, point o2);

public:
    // Constructor
    point(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    // Member function to take input
    void input() {
        cout << "Enter x and y coordinates: ";
        cin >> x >> y;
    }

    // Display coordinates
    void display() {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

// Friend function definition to calculate distance
void distance(point o1, point o2) {
    float dist = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
    cout << "Distance between points: " << dist << endl;
}

int main() {
    point p, q;

    cout << "Enter coordinates for point p:" << endl;
    p.input();

    cout << "Enter coordinates for point q:" << endl;
    q.input();

    cout << "Point p: ";
    p.display();

    cout << "Point q: ";
    q.display();

    distance(p, q);  // Call friend function to compute distance

    return 0;
}
