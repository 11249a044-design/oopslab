#include<iostream>
using namespace std;

class library {
private:
    int totalbooks;
    string secretcode;

public:
    library(int books, string code) : totalbooks(books), secretcode(code) {}
    friend class librarian;
};

class librarian {
public:
    void showdetails(library lib) {
        cout << "TOTAL BOOKS: " << lib.totalbooks
             << ", secret code: " << lib.secretcode << endl;
    }
};

int main() {
    library lib(1200, "lib@123");
    librarian l;
    l.showdetails(lib);
    return 0;
}
