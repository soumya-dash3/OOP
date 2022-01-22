#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
string name;
int age;
void setName(string iname){
    name=iname;
}
void setAge(int iage){
    age=iage;
}
//inheritance- using of characteristics of member functions of a class in another class 
};
// below is the syntax and example of inheritance
// class new_class_name : access specifier of the class to be inherited class_name{};
class Student : public Person{
public:
int id;
void setId(int iid){
    id=iid;
}
void details(){
    cout<<name<<endl<<age<<<<end<<id<<endl;
}
};
// the class from which we are inheriting is called base class and the class which inherits another class is called subclass
// here person is the base class and student is the subclass
int main(){
Student anil;
anil.setName("anil");
anil.setAge(21);
anil.setId(123);
anil.details();
return 0;


}