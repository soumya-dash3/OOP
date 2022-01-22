#include<iostream>
using namespace std;
class Person{
public:
Person(){
    cout<<"Constructor of the Person class is called"<<endl;
}
~Person(){
    cout<<"Destructor of the Person class is called"<<endl;
}
};
// inherited class
class Student: public Person{
public:
Student(){
    cout<<"Constructor of the student class is called"<<endl;
}
~Student(){
    cout<<"Destructor of the student class is called"<<endl;
}
};
int main(){
Student anil;
return 0;
// constructor of base class is called 1st ,then contructor of constructor of derived class
//thirdly the destructor of base class is called ,then the destructor of derived class

}