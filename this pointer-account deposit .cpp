#include <iostream> 
using namespace std; 
class Account { 
double balance; 
public: 
Account(double b=0.0): balance(b) {} 
void deposit(double balance) { // parameter same as member name 
this->balance += balance;   // use this-> to refer to member 
} 
void show() const { cout << "Balance: " << balance << endl; } 
}; 
int main() { 
Account a(1000.0); 
a.show(); 
a.deposit(500.0); 
a.show(); 
return 0; 
} 
