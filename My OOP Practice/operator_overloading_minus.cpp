#include<iostream>
using namespace std;
class Marks{
    int intmark;
    int extmark;
    public:
    Marks(){
        intmark=0;
        extmark=0;
    }
    Marks(int im,int em){
        intmark=im;
        extmark=em;
    }
    void display(){
        cout<<intmark<<endl<<extmark<<endl;
    }
    //operator overloading  jisse function mein hi operator lag jaaye
    //declaration of operator+
    Marks operator+(Marks m){
        Marks temp;
        temp.intmark=intmark+m.intmark;
        temp.extmark=extmark+m.extmark;
        return temp;
    }
    Marks operator-(Marks m);
};

//operator overloading using scope resolution
Marks Marks::operator-(Marks m){
Marks temp;
        temp.intmark=intmark-m.intmark;
        temp.extmark=extmark-m.extmark;
        return temp;
}
int main(){
Marks m1(10,20),m2(30,40);
Marks m3=m1+m2;
Marks m4=m2-m1;
m3.display();
m4.display();
return 0;
}