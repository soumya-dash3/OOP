#include<iostream>
using namespace std;
class Person{
public:
virtual void details()=0;
//pure virtual function definition
// also, this has to be overridden 
};
// defining of pure virtual function in base class
void Person::details(){
    cout<<"Hello world"<<endl;
}
class Student:public Person {
public:
void details(){
    cout<<"Hello"<<endl;
    Person::details();
}
};
// abstract class- when a class has 1 or more virtual functions 
// since abstract class contains 1 or more incomplete methods so no object can be created from the class

int main(){
student anil;
anil.details();
return 0;
return 0;
}