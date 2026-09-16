#include<iostream>
using namespace std;

class Test;
class Example{
    int a;
    public:
    void geta(int);
    void disa();
    friend void Swap(Example &, Test &);
};

void Example :: geta(int x){
    a=x;
}

void Example :: disa(){
    cout<<a<<"\n";
}

class Test{
    int b;
    public:
    void getb(int);
    void disb();
    friend void Swap(Example &, Test &);
};

void Test :: getb(int y){
    b=y;
}

void Test :: disb(){
    cout<<b<<"\n";
}

void Swap(Example &E, Test &T){
    int ans = E.a;
    E.a=T.b;
    T.b=ans;
    cout<<E.a<<" "<<T.b;    
}


int main(){
    Example E1;
    Test T1;
    E1.geta(10);
    T1.getb(20);
    Swap(E1,T1);
}