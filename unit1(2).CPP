#include<iostream>
using namespace std;
class student{
    int roll;
    string name;
    public:
    student (){
        roll=0;
        name="unknown";
        cout<<"Default constructer called"<<endl;
    }
    void display(){
        cout<<"Roll:"<<roll<<",Name:"<<name<<endl;
    }
};
int main(){
    student s1;
    s1.display();
    return 0;
}