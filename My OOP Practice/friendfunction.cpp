#include<iostream>
using namespace std;
class Human{
string name;
int age;
public:
Human(string iname, int iage){
    name=iname;
    age=iage;

}
public:
void details(){
    cout<<name<<endl<<age<<endl;
}
friend void display(Human man);
// friend function syntax= friend datatype func_name(class_name obj_name)
// friend function is used to access all the properties and members of the class outside the class
// and if to make whole class a friend, the syntax is
//friend class classname
};
// calling of friend function
void display(Human man){
    cout<<man.name<<endl<<man.age<<endl;
}
int main(){
Human h1("anil",21);
display(h1);
//calling friend function in main function
return 0;

}