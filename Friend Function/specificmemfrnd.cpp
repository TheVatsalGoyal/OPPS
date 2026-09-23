#include<iostream>
using namespace std;

class Test;
class Example{
    public:
    void display(Test);
};


class Test{
    int b;
    public:
    void getb(int);
    friend void Example :: display(Test);
};

void Test :: getb(int y){
    b=y;
}

void Example::display(Test T1){
    cout<<T1.b;
}

int main(){
    Example E1;
    Test T1;
    T1.getb(10);
    E1.display(T1);
}