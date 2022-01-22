#include<iostream>
#include<string>
using namespace std;
class Human{
    private:
    string name;
    int age;
public:
//Below is a contructor and it is called when an object is created
Human(){
    name="noname";
    age=0;
cout<<"Constructor is called when you create an object of human"<<endl;
}
void display(){
    cout<<name<<endl<<age<<endl;
}
};

//Constructor has same name as class name and no return type

int main(){
Human h1;
h1.display();
}