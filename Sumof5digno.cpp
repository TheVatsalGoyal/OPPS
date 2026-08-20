#include "iostream"
using namespace std;

class Sum{
    int r;
    
    public:
        void calc(int);
        void display();
};

void Sum::calc(int x){
    r=x;   
}


void Sum::display(){
    int a=r%10;
    int b=(r/10)%10;
    int c=(r/100)%10;
    int d=(r/1000)%10;
    int e=(r/10000)%10;
    int ans= a+b+c+d+e;
    cout<<ans;
}

int main(){
    Sum C;
    int digit;
    cout<<"Digit: ";
    cin>>digit;
    C.calc(digit);
    C.display();

}