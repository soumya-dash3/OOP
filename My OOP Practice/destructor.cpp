#include<iostream>
using namespace std;
class Human{
    public:
    Human(){
        cout<<"Constructor called"<<endl;
    }
    ~Human(){
        cout<<"Destructor called"<<endl;
    }
    //Destructor has same name as class and no parameters can be passed to it
};
int main(){
Human *anil;
anil=new Human();
delete anil;
return 0;

}