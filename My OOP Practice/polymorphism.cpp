#include<iostream>
using namespace std;
// polymorphism-many forms,it occurs when there is a hierarchy of classes and are related by inheritance
// so to make functions work in different forms, we use virtual functions
//virtual functions-functions in a base class using keyword virtual, the virtual functions in base class indicate to the 
//derived class that the method is overridden in the derived class, so calling the function is not required
// therefore the derived function is called
class Person{
    public:
    virtual void details(){
        cout<<"Hello"<<endl;
    }
};
class Student :public Person{
public:
void details(){
    cout<<"Hello World"<<endl;
}
};

class Child :public Person{
public:
void details(){
    cout<<"Hello to you"<<endl;
}
};
void detail_wanted(Person &p){
p.details();
}
int main(){
    Child anil;
Student alex;
detail_wanted(anil);
return 0;


}