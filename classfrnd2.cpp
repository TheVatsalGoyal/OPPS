#include<iostream>
using namespace std;

class B;
class A{
    int a;
    public:
    void geta(int);
    void showa();
    friend class B;
    void displayB(B);
};

class B{
    int b;
    public:
    void getb(int);
    void showb();
    void displayA(A);
    friend class A;
};

void A::geta(int x){
    a=x;
}

void B::getb(int y){
    b=y;
}

void A::showa(){
    cout<<a<<'\n';
}

void B::showb(){
    cout<<b<<'\n';
}

void A::displayB(B B1){
    cout<<B1.b<<'\n';
}

void B::displayA(A A1){
    cout<<A1.a<<'\n';
}


int main(){
    A obj1;
    obj1.geta(10);
    B obj2;
    obj2.getb(20);
    obj1.showa();
    obj2.showb();
    obj1.displayB(obj2);
    obj2.displayA(obj1);
}