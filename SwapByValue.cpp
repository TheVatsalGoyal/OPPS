#include<iostream>
using namespace std;

// class Example{
//     int a,b;
//     public:
//     void geta(int,int);
//     void Swap();
// };

// void Example::geta(int a1, int b1){
//     a=a1;
//     b=b1;
// }

// void Example::Swap(){
//     int temp=a;
//     a=b;
//     b=temp;
//     cout<<a<<" "<<b;
// }

// int main(){
//     Example E1;
//     E1.geta(10,20);
//     E1.Swap();
    
// }


void Swapping(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=10,y=20;
    Swapping(x,y);
    cout<<x<<" "<<y;
}