#include<iostream>
using namespace std;
class Person{
protected:
string name;
public:
void setName(string iname){
    name=iname;
}
};
class Student:public Person{
public:
void display(){
    cout<<name<<endl;
}
void setStudentName(string iname){
    setName(iname);
}
};
int main(){
// in protected inheritance , the public members of thebase class will become protected members for derived class
// therefore, another public function can be made in the derived class which will be callable in main function  
Student anil;
anil.setStudentName("anil");
anil.display();
return 0;

}