#include<iostream>
using namespace std;
class student{
    int roll;
    public:
    student(int r){
        roll=r;

    }
    student(const,student&s){
        roll=s.roll;
        cout<<"copy constructor called"<<endl;
    }
    void display(){
        cout<<"Roll:"<<roll<<endl;
    }

};
int main(){
    student s1(007);
    student s2(006);
    s1.display();
    s2.display();
    return 0;

}