#include<iostream>
using namespace std;

class Example{
    int a;
    public:
    void geta(int);
    Example Sum(Example, Example);
    void display(Example);
};

void Example::geta(int x){
    a=x;
}

Example Example ::Sum(Example E1, Example E2){
    
}