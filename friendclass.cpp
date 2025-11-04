#include <iostream>
using namespace std;

class Engine {
private:
    int temperature;
public:
    Engine(int t) { temperature = t; }
    friend class Car;
};

class Car {
public:
    void showTemp(Engine e) {
        cout << "Engine Temperature: " << e.temperature << "°C" << endl;
    }
    void coolEngine(Engine &e) {
        e.temperature -= 10;
        cout << "Cooling engine... New temperature: " << e.temperature << "°C" << endl;
    }
};

int main() {
    Engine e1(90);
    Car c1;
    c1.showTemp(e1);
    c1.coolEngine(e1);
    return 0;
}
