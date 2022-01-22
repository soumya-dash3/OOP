#include<iostream>
using namespace std;
class Person{
    public:
    void details(){
        cout<<"Hello"<<endl;
    }
};
class Student :public Person{
    public:
    void details()
{
    cout<<"hello world"<<endl;
}
Person::details();
//to access base class in derived class
//syntax-
//base_class::function_name();
};
// here in the base and derived class, the name of the function,return type and the same number of paramters, the base class is overridden
//ie the derived class ka function is called and not the base class one
int main(){
Student anil;
anil.details();
anil.Person::details();
// this is the syntax to access the base class member when it is overridden
//ie obj_name.class_name::function_name();
return 0;



}