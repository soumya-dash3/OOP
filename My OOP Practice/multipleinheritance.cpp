#include<iostream>
#include<string>
using namespace std;
class h1{
public:
int thing;
void askH1(){
    cout<<"Ask me what you want"<<endl;
}

};
class h2{
public:
int thing1;
void askH2(){
    cout<<"Ask me now what you want"<<endl;
}

};
class h3: public h1,public h2{
public:
cout<<"Ask both of them"<<endl;
void setH1andH2(int ithing,int ithing1){
thing=ithing;
thing1=ithing1;
}
void display(){
cout<<"thing is "<<thing<<" "<<"and thing1 is"<<thing1<<endl;
}

};
// multiple inheritance is inheriting from 2 or more classes
int main(){
h3 anil;
anil.setH1andH2(1,2);
anil.display();
anil.askH1();
anil.askH2();
return 0;

}