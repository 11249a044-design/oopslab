#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;
public:
    void setData(double l, double w) {
        length = l;
        width = w;
    }
    double area() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    r.setData(5.5, 3.2);
    cout << "Area of Rectangle: " << r.area() << endl;
    return 0;
}
