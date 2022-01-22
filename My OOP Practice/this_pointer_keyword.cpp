#include<iostream>
using namespace std;
class Person{
private:
int age;
public:
void setAge(int iage){
age=iage;
// or can be written as this->age=iage;
}
void showAge(){
    cout<<this->age<<endl;
}
};
// only member functions of the class have this pointer, therefore friend function don't have this pointer as they are not member function
// Another use of this pointer
//when the name of member function and parameter is same
//so since this pointer contains address of the object
// so can be written as this->age=age; 
int main(){
Person anil;
anil.setAge(21);
anil.showAge();
return 0;

   
}