#include<iostream>
using namespace std;

class Test;
class Example{
    int a;
    public:
    Example(int);
    void displayA();
    void sum(Example,Test);
};

class Test{
    int b;
    public:
    void displayB();
    Test(int);
    friend void Example :: sum(Example,Test);
};

Example::Example(int x){
    a=x;
}

void Example::displayA(){
    cout<<a<<"\v";
}

Test::Test(int y){
    b=y;
}

void Test::displayB(){
    cout<<b<<"\v";
}

void Example::sum(Example E,Test T){
    cout<<E.a+T.b<<" ";
}


int main(){
    Example E1(10);
    E1.displayA();
    Test T1=Test(20);
    T1.displayB();
    E1.sum(E1,T1);
}