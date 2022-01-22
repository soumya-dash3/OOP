#include<iostream>
using namespace std;
class Person{
public:
virtual void details(){
    cout<<"Hello"<<endl;
}
};
class Student:public Person{
void details(){
    cout<<"Hello to you"<<endl;
}
};
class GStudent:public Student{
void details(){
    cout<<"Hello world"<<endl;
}
};
void name(Person &p){
    p.details();
}
int main(){
Person anil;
Student anjali;
GStudent aditya;
name(anil);
name(anjali);
name(aditya);
return 0;


}