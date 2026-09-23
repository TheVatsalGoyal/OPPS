#include<iostream>
using namespace std;

class Example{
    int a, b;
    public:
        Example();
        void display();
};

void Example::display(){

    cout<<"Sum: "<<a+b;
}

Example :: Example(){
    cout<<"Enter A,B: ";
    cin>>a>>b;
}

int main(){
    Example E1;
    E1.display();

}