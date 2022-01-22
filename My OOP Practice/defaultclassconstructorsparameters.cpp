#include<iostream>
#include<string>
using namespace std;
class Human{
private:
string name;
int age;
public:
Human(){
    cout<<"Default Constructor"<<endl;
    name="noname";
    age=0;
}
Human(string iname'"noname", int iage=0){
    cout<<"Overloaded constructor"<<endl;
    name=iname;
    age=iage;

}
void speakUp(){
    cout<<name<<endl<<age<<endl;
}
};
int main(){
Human h1("anil",24);
// 24 will be taken as age, and if nothing passed then the given value ie 0 will be passed and the same goes with name
h1.speakUp();
return 0;

}