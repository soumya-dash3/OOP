#include<iostream>
using namespace std;
//nested class-class inside class
class Person{
    public:
    string name;
    class Address{
        public:
        string country;
        string stname;
        int houseno;

    };
    Address add;
    void addressplease(){
        cout<<name<<endl<<add.country<<endl<<add.stname<<endl<<add.houseno<<endl;
    }
};
int main(){
Person anil;
anil.name="anil";
anil.add.country="India";
anil.add.stname="UP";
anil.add.houseno=61;
anil.addressplease();
return 0;



}