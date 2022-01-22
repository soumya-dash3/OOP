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
class Student: public Person{
public:
void display(){
        cout<<name<<endl;
}
};
int main(){
// protected makes the member variables and member functions accessible in the class and well as the subclass which inherits the base class, 
// not in int main
Student anil;
anil.setName("anil");
anil.display();
return 0;



}