#include<iostream>
using namespace std;
class student{
    int roll;
    string name;
    public:
    student(int r,string n){
        roll=r;
        name=n;
        cout<<"Parameterized constructer is called"<<endl;

    }
    void display(){
        cout<<"Roll:"<<roll<<",Name:"<<name<<endl;
    }

};
int main(){
    student s1(007,"JAMES BOND");
    student s2(005,"VESPER");
    s1.display();
    s2.display();
    return 0;
}