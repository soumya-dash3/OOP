#include<iostream>
#include<string>

using namespace std;
class Human{
public:
string name="Noname";
void hello(){

}
};
// :: is the scope resolution operator used to define thing s outside the class. Also in line number 7 it ca be initialsed and would be 
//overwritten by the name given in main, but if we use scope resolution to change it's name, the it won't be possible
// Human::name="anil"; gives error
void Human::hello(){
    cout<<Human::name<<endl;
}
int main(){
Human h1;
h1.name="Ronny";
h1.hello();
return 0;
}