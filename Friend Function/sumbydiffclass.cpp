#include<iostream>
using namespace std;

class Example; // forward decelaration of class
class Test{
    int a;
    public:
        void geta(int);
        int sum(Example,Test);

};

class Example{
    int b;
    public:
        void getb(int);
        int getvalue();
        int sum(Example,Test);
};

void Test::geta(int A){
    a=A;
}


void Example::getb(int B){
    b=B;
}
int Example::getvalue(){
    return b;
}
int Test::sum(Example E1, Test T1){
    int ans;
    ans= E1.getvalue()+T1.a;
    return ans;
}

int main(){
    Example E,obj;
    E.getb(10);
    Test T;
    T.geta(20);
    int r= obj.sum(E,T);
    cout<<r<<endl;
}