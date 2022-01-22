#include<iostream>
#include<string>
using namespace std;
class Person1{
protected:
int thing;
public:
Person1(int t){
    cout<<"Constructor of person 1 is called"<<endl;
    thing=t;
}
};
class Person2{
protected:
string name;
public:
Person2(){
    cout<<"Constructor of person 1 is called"<<endl;
    
}
};
class Person3:public Person1,public Person2{
public:
Person3(int x,string name):Person1{},Person2{}{
    thing=x;
    name=name;
    cout<<"Person 3 class constructor is called"<<endl;
}
void display(){
    cout<<"Thing is "<<thing<<" and name is "<<name<<endl;
}
//passing value in the person2 class to the base class, ie person1 class
};
int main(){
Person3 anil(21,"Hello");
anil.display();
return 0;

}