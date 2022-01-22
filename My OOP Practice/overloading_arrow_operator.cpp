#include<iostream>
using namespace std;
// arrow operator(->) is also called class member operator, is unary operator
//obj -> element
class Marks{
int marks;
public:
Marks(int m){
    mark=m;
}
void details(){
    cout<<"I got "<<marks<<endl;
    //overloading class member operator
    Marks *operator->(){
        return this;
    }
};
int main(){
Marks anilsmark(88);
anilsmark.details();
anilsmark->details();
// ? :: .* . can't be overloaded

return 0;
}