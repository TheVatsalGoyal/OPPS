#include<iostream>
using namespace std;

class Example{
    int a;
    public:
        Example(int);
        void display();
};

void Example::display(){

    cout<<"Area: "<<3.14*a*a;
}

Example :: Example(int x){
    a=x;
}

int main(){
    Example E1(10);
    E1.display();

}