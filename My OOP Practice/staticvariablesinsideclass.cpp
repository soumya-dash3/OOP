#include<iostream>
using namespace std;
class Human{
public:
static int human_count;
Human(){
    human_count++;
}
void humanTotal(){
    cout<<"There are "<<human_count<<" people in this program"<<endl;
}
// Static member function- function with the keyword static, this has class scope, ie this will be shared by all the objects of the class
// also only the static variables can be used in static member function
static void humanCount(){
    cout<<"There are "<<human_count<<" people in this program"<<endl;
}
};
int Human::human_count=0;
int main(){
cout<<Human::human_count<<endl;
Human h1;
Human h2;
Human h3;
h1.humanTotal();
h1.humanCount();
cout<<Human::human_count<<endl;
// calling of static member function

return 0;
}