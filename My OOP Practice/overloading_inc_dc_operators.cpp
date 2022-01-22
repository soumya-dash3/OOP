#include<iostream>
using namespace std;
class Marks{
int mark;
public:
//default contructor that will initialize mark to 0
Marks(){
    mark=0;
}
//user defined constructor that will pass value of tha parameter to the mark 
Marks(int m){
    mark=m;
}
void yourMarksPlease(){
    cout<<"Your mark is"<<mark<<endl;
}

void operator++(){
    mark+=1;
}
friend void operator--(&marks);
m.mark=-1;
Marks anilsmark(45);
    anilsmark.yourMarksPlease();
    int x=20;
    anilsmark+=x;
    anilsmark.yourMarksPlease();
    anilsmark-=x;
    anilsmark.yourMarksPlease();
return 0;
};
int main(){






}