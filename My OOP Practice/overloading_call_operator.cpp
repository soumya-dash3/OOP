#include<iostream>
using namespace std;
class Marks{
int marks;
public:
Marks(int m){
    cout<<"Constructor is called"<<endl;
    mark=m;
}
void details(){
    cout<<"I got "<<marks<<endl;
}
//operator fumction must be static class
Marks operator()(int mk){
cout<<"Operator function is called"<<endl;
    mark=m;
mark=mk;
return *this;
}
};
int main(){
Marks anilsmark(88);
anilsmark.details();
//operator function called
anilsmark(44);

    return 0;
}