#include<iostream>
#include<string>
using namespace std;
//Function Overloading - Writing function with same name but with diff types or diff no of parameters 
class Human{
private:
int age;
string name;
public:
Human(){
    cout<<"Default Constructor"<<endl;
    age=0;
    name="noname";
}
// Constructor with name as a parameter
Human(string iname){
cout<<"Constructor with name as a parameter"<<endl;
age=0;
name=iname;
}
Human(int iage){
cout<<"Constructor with age as a parameter"<<endl;
age=iage;
name="noname";

}
Human(string iname, int iage){
    cout<<"Constructor with name and age as a parameter"<<endl;
    name=iname;
    age=iage;
}
void display(){
    cout<<name<<endl<<age<<endl;
}
};
int main(){
Human h1;
h1.display();
// only default constructor will be called
Human h2("ronny");
h2.display();

Human h3(25);
h3.display();

Human h4("anna",25);
h4.display();

return 0;
}