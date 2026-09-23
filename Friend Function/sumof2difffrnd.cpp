#include<iostream>
using namespace std;

class Test;
class Example{
    int a;
    public:
    void geta(int);
    void disa();
    friend int sum(Example, Test);
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
    friend int sum(Example, Test);
};

void Test :: getb(int y){
    b=y;
}

void Test :: disb(){
    cout<<b<<"\n";
}

int sum(Example E, Test T){
    int ans = E.a+T.b;
    return ans;
}


int main(){
    Example E1;
    Test T1;
    E1.geta(10);
    T1.getb(20);
    cout<<sum(E1,T1)<<'\n';
}