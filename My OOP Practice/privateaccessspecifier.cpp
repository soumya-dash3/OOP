#include<iostream>
#include<string>
using namespace std;
class Human{
private:
int age;
int getAge(){
    return age-3;
}
public:
void displayAge(){
    cout<<getAge()<<endl;
}
void setAge(int value){
age=value;
}
};

int main(){
Human h1;
h1.setAge(21);
h1.displayAge();
return 0;

}