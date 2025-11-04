#include <iostream>
using namespace std;

class DynamicArray {
    int *arr;
    int size;
public:
    DynamicArray(int s) {
        size = s;
        arr = new int[size];
        cout << "Array of size " << size << " created." << endl;
    }
    void setElement(int index, int value) {
        if (index >= 0 && index < size)
            arr[index] = value;
    }
    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    ~DynamicArray() {
        delete[] arr;
        cout << "Array destroyed and memory freed." << endl;
    }
};

int main() {
    DynamicArray da(3);
    da.setElement(0, 10);
    da.setElement(1, 20);
    da.setElement(2, 30);
    da.display();
    return 0;
}
