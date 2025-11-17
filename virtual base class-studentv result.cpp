#include <iostream> 
#include <string> 
using namespace std; 
class Student { 
protected: 
int rollNo; 
string name; 
public: 
Student(int r=0, string n=""): rollNo(r), name(n) {} 
}; 
class Test : virtual public Student { 
protected: 
int marks1, marks2; 
public: 
Test(int m1=0, int m2=0): marks1(m1), marks2(m2) {} 
}; 
class Sports : virtual public Student { 
protected: 
int sportScore; 
public: 
Sports(int s=0): sportScore(s) {} 
}; 
class Result : public Test, public Sports { 
public: 
Result(int r, string n, int m1, int m2, int s) 
: Student(r,n), Test(m1,m2), Sports(s) {} // initialize virtual base 
void display() { 
int total = marks1 + marks2 + sportScore; 
cout << "Roll: " << rollNo << ", Name: " << name << ", Total: " << total 
<< endl; 
} 
}; 
int main() { 
Result res(101, "Carl", 78, 82, 10); 
res.display(); 
return 0; 
} 
