#include<iostream>
using namespace std;

class Example{
    int a;
    public:
    void geta(int);
    void Swap(Example, Example);
};

void Example::geta(int a1){
    a=a1;
}

void Example::Swap(Example A, Example B){
    int S=A.a;
    A.a=B.a;
    B.a=S;
    cout<<A.a<<" "<<B.a;
}

int main(){
    Example E1,E2;
    E1.geta(10);
    E2.geta(20);
    E2.Swap(E1,E2);
    
}