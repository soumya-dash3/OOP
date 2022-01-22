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
void display(){
cout<<name<<endl;

}
void setStudentName(string iname){
    setName(iname);
}
};
class GStudent : public Student{
    public:
    void setGStudentName(string iname){
        setStudentName(iname);
    }
};
// private inheritance- public and protected members of the base class will act as private members of the derived class 
int main(){
GStudent anil;
anil.setStudentName("anil");
anil.display();
return 0;
}