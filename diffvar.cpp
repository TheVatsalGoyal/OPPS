#include<iostream>
using namespace std;

int main (){
    int a=10;
    int &b=a;
    a = a + 10;
    cout<<"Value of a "<< a <<endl;
    cout<<"Value of b "<< b <<endl;
    return 0;
}