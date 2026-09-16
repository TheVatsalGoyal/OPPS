#include "iostream"
using namespace std;

class Para{
    int a,b;
    
    public:
        void getdata(int, int);
        int printdata();
};

void Para::getdata(int x, int y){
    a=x;
    b=y;
   
}

int Para::printdata(){
    return a+b;
}

int main(){
    Para P;
    int n1,n2;
    cout<<"NO: ";
    cin>>n1>>n2;
    P.getdata(n1,n2);
    cout<<P.printdata();

}