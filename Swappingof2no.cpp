#include "iostream"
using namespace std;

class Swap{
    int a,b;
    
    public:
        void swapdig(int, int);
        void swaped();
};

void Swap::swapdig(int x, int y){
    a=x;
    b=y;   
}

void Swap::swaped(){
    int temp;
    temp =a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
}

int main(){
    Swap S;
    int n1,n2;
    cout<<"2 numbers: ";
    cin>>n1>>n2;
    S.swapdig(n1,n2);
    S.swaped();

}