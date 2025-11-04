#include <iostream>
using namespace std;

class Account {
private:
    double balance;
public:
    Account(double b) { balance = b; }
    friend void transferMoney(Account &from, Account &to, double amount);
    void showBalance() { cout << "Balance: " << balance << endl; }
};

void transferMoney(Account &from, Account &to, double amount) {
    if (from.balance >= amount) {
        from.balance -= amount;
        to.balance += amount;
        cout << "Transfer successful!" << endl;
    } else {
        cout << "Insufficient balance!" << endl;
    }
}

int main() {
    Account a1(1000), a2(500);
    cout << "Before Transfer:" << endl;
    a1.showBalance();
    a2.showBalance();

    transferMoney(a1, a2, 300);

    cout << "\nAfter Transfer:" << endl;
    a1.showBalance();
    a2.showBalance();
    return 0;
}
