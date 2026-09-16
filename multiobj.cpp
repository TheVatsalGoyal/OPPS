#include<iostream>
using namespace std;

class Example{
    int a;
    public:
    void geta(int);
    int Sum(Example, Example);
};

void Example::geta(int a1){
    a=a1;
}

int Example::Sum(Example A, Example B){
    int S=A.a+B.a;
    return(S);
}

int main(){
    Example E1,E2,E3;
    E1.geta(10);
    E2.geta(20);
    int r=E3.Sum(E1,E2);
    cout<<r;
}