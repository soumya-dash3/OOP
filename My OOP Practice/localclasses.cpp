#include<iostream>
using namespace std;
//local class- when classes are defined inside function
void studentlist();
int main(){
studentlist();
return 0;

}
void studentlist(){
    class Student{
        public:
        string name;
        int age;
        void display(){
            cout<<name<<endl<<age<<endl;
        }
    };
    Student anil;
    anil.name="anil";
    anil.age=21;
    anil.display();
}