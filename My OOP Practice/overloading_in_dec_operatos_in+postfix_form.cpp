#include<iostream>
using namespace std;
class Marks{
 public:
    Marks(){
        mark=0;
    }
    Marks(int m){
        mark=im;
    }
    void display(){
        cout<<your mark is<<Marks<<endl;
    }

    //operator overloading  in ++, in brackets is the datatype jiska chahiye
    Marks operator++(int ){
        Marks duplicate(*this);
        mark+=1;
        return duplicate;
    }
    friend Marks operator--(Marks&,int){

    }
};
int main(){
Marks anil(61);
anil.display();
(anil++);
anil.display();
return 0;

}