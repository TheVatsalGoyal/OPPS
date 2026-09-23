#include<iostream>
using namespace std;

class Example{
    int a, b;
    public:
        Example(int, int);
        void display();
};

void Example::display(){

    cout<<"A: "<<a<<"\t"<<"B: "<<b<<"\v";
}

Example :: Example(int x,int y){
    a=x;
    b=y;
}

int main(){
    Example E1(10,20);
    E1.display();
    Example E2(60,120);
    E2.display();
    Example E3=E1;
    E3.display();


}