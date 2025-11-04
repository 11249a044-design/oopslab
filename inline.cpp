#include <iostream>
using namespace std;

class Math {
public:
    inline int add(int a, int b) { return a + b; }
    inline int subtract(int a, int b) { return a - b; }
};

int main() {
    Math m;
    cout << "Add: " << m.add(10, 5) << endl;
    cout << "Subtract: " << m.subtract(10, 5) << endl;
    return 0;
}
