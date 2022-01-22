#include<iostream>
using namespace std;
class Human{
private:
string *name;
int *age;
public:
Human(string iname, int iage){
    name=new string;
    age=new int;
    // allocated dynamically
    *name=iname;
    *age=iage;
}
void display(){
    cout<<"Hello "<<*name<<" and you are "<<*age<<endl;
}

~Human(){
    delete name;
    delete age;
    cout<<"Memories released"<<endl;
}


};
int main(){
Human *anil=new Human("Anil",21);
anil->display();
delete anil;
return 0;
}