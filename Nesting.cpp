#include "iostream"
using namespace std;

class Para{
    int a,b;
    int add();
    public:
        void getdata(int, int);
};

void Para::getdata(int x, int y){
    a=x;
    b=y;
    int res=add();
    cout<<"Sum is: "<<res;
}

int Para::add(){
    return a+b;
}

int main(){
    Para P;
    int n1,n2;
    cout<<"NO: ";
    cin>>n1>>n2;
    P.getdata(n1,n2);
    return 0;

}
