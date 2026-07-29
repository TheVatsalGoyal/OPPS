#include<iostream>
using namespace std;

int Sum(int *, int *);

int main(){
    int a,b,c;
    cin>>a>>b;
    c= Sum(&a, &b);
    cout<<c;
}

int Sum (int *x, int *y){
    int S;
    S= *x + *y;
    return S;
}