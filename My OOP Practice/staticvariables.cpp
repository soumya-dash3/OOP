#include<iostream>
using namespace std;
void display(){
static int counter=0;
cout<<"Display function called "<<++counter<<" times"<<endl;

}
int main(){
    display();
     display();
      display();
    

return 0;

}