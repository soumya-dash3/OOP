#include<iostream>
using namespace std;
class Person{
protected:
string name;
public:
void setName(string iname){
    name=iname;
}
};
class Student :public Person{
    public:
    void display(){
        cout<<name<<endl;
    }
};
int main(){
// public inheritance is most commonly used inheritance type, in this, the ouvlic members of the base class will act as public members
// of the derived class also
Student anil;
anil.setName("anil");
anil.display();

return 0;
}