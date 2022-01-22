#include<iostream>
#include<string>
using namespace std;
class Person{
protected:
string name;
public:
void setName(string iname){
    name=iname;
}
};
class Student: private Person{
public:
Person::name;
Person::setName;

// syntax of modifying access level of base class members in derived class
void display(){
cout<<name<<endl;
}
void setStudentName(string iname){
    setName(iname);
}
};

// private inheritance- public and protected members of the base class will act as private members of the derived class 
int main(){
Student anil;
anil.name="anil";
anil.setName("anil");
anil.display();
return 0;
}