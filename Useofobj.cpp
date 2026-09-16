#include"iostream"
using namespace std;

class Example{
    int a,b;
    public:
    void getd(int,int);
    void Sum(Example,Example);
};

void Example::getd(int a1,int b1){
    a=a1;
    b=b1;
}

void Example::Sum(Example A, Example B){
    int a3=A.a+B.a;
    int b3=A.b+B.b;
    cout<<a3<<" "<<b3;
}


int main(){
    Example E1,E2,E3;
    E1.getd(10,20);
    E2.getd(30,40);
    E3.Sum(E1,E2);
    
}