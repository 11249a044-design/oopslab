#include <iostream>
#include <cmath>
using namespace std;

// --------------------------------------------------
// Class 1: Counter - Demonstrating Unary Operator Overloading
// --------------------------------------------------
class Counter {
private:
    int count;
public:
    Counter(int c = 0) { count = c; }

    // Prefix increment
    Counter operator++() {
        ++count;
        return *this;
    }

    // Postfix increment
    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }

    void show() { cout << "Count: " << count << endl; }
};

// --------------------------------------------------
// Class 2: MathOps - Demonstrating Function Overloading
// --------------------------------------------------
class MathOps {
public:
    int abs(int n) { return (n < 0) ? -n : n; }
    float abs(float n) { return (n < 0) ? -n : n; }
    double abs(double n) { return (n < 0) ? -n : n; }
};

// --------------------------------------------------
// Class 3: Vector2D - Demonstrating Friend Function,
// Operator Overloading, and Function Overloading
// --------------------------------------------------
class Vector2D {
private:
    float x, y;
public:
    Vector2D(float a = 0, float b = 0) { x = a; y = b; }

    // Friend function declaration
    friend float distance(Vector2D v1, Vector2D v2);

    // Operator overloading (+)
    Vector2D operator+(Vector2D v) {
        return Vector2D(x + v.x, y + v.y);
    }

    // Function overloading - same function name 'set'
    void set(float a) { x = a; }
    void set(float a, float b) { x = a; y = b; }

    void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

// Friend function definition
float distance(Vector2D v1, Vector2D v2) {
    return sqrt(pow(v1.x - v2.x, 2) + pow(v1.y - v2.y, 2));
}

// --------------------------------------------------
// Main Function
// --------------------------------------------------
int main() {
    cout << "=== Unary Operator Overloading Demo ===" << endl;
    Counter c1(5);
    ++c1;          // Prefix
    c1.show();
    c1++;          // Postfix
    c1.show();

    cout << "\n=== Function Overloading Demo ===" << endl;
    MathOps m;
    cout << "abs(-5) = " << m.abs(-5) << endl;
    cout << "abs(-3.2f) = " << m.abs(-3.2f) << endl;
    cout << "abs(-7.89) = " << m.abs(-7.89) << endl;

    cout << "\n=== Friend Function, Operator Overloading, and Function Overloading Demo ===" << endl;
    Vector2D v1(3, 4), v2(6, 8);
    cout << "Distance between v1 and v2: " << distance(v1, v2) << endl;

    Vector2D v3 = v1 + v2;
    cout << "Sum of v1 and v2: ";
    v3.show();

    v3.set(10);
    cout << "After setting x only: ";
    v3.show();

    v3.set(10, 20);
    cout << "After setting both x and y: ";
    v3.show();

    return 0;
}
