#include<iostream>
using namespace std;
class HumanBeing{
        public:
        string name;
        void hello(){
            cout<<name<<endl;
        }
        void display(){
            cout<<"Hello World"<<endl;
        }
    };
int main(){
    HumanBeing  h1;
    h1.name="Ronny";
    h1.display();
    h1.hello();
    
    return 0;

}