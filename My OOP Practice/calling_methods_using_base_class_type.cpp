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
void details(){
    cout<<"Hello World"<<endl;
}
};
void detail_student(Person p){
p.details();
}
int main(){
Student anil;
anil.details();
detail_student(anil);
return 0;


}