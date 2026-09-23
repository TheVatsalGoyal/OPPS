#include<iostream>
using namespace std;

class Example{
    int a, b;
    public:
        Example();
        void display();
};

void Example::display(){
    cout<<"Swapped values: "<<a<<"\t"<<b;
}

Example :: Example(){
    cout<<"Enter A,B: ";
    cin>>a>>b;
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    Example E1;
    E1.display();

}