#include<iostream>
using namespace std;


class Example{
    int a,b;
    public:
    Example();
    Example(Example &);
    void displayA();
};

void Example::displayA(){
    cout<<a<<" "<<b <<"\v";
}

Example::Example(){
    a=10;
    b=20;
}

Example::Example(Example &E){
    a=E.a;
    b=E.b;
}

int main(){
    Example E1;
    E1.displayA();
    Example E2(E1);
    E2.displayA();
}