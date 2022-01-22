#include<iostream>
using namespace std;
class Human{
public:
string name;
void hello(){
cout<<name<<endl;
}
};
int main(){
Human h1;
//created in stack
Human *h2=new Human(); 
//created dynamically ie in heap
h1.name="Ronny";
h1.hello();
h2->name="Bunty";
h2->hello();
return 0;

}