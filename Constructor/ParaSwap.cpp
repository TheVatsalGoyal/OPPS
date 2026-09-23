#include<iostream>
using namespace std;

class Example{
    int a, b;
    public:
        Example(int, int);
        void display();
};

void Example::display(){

    cout<<"Swapped values: "<<a<<"\t"<<b;
}

Example :: Example(int x,int y){
    a=x;
    b=y;
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    Example E1(10,20);
    E1.display();

}