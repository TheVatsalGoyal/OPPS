#include<iostream>
using namespace std;

void sum();
int sum(int, int);
float sum(int, float, int);

int main(){
    int a,b,r1;
    float r2,c;
    cout<<"Enter the numbers: ";
    cin>>a>>b>>c;
    r1= sum(a,b);
    r2= sum(a,c,b);
    cout<<"The sum is : "<<r1<<endl;
    cout<<"The sum is : "<<r2<<endl;
}

void sum(){
    int x,y,z;
    cout<<"Enter the no.: ";
    cin>>x>>y;
    z=x+y;
    cout<<z;
}
int sum(int x, int y){
    int z;
    z=x+y;
    return z;
}

float sum(int x, float z, int y){
    float S;
    S=x+z+y;
    return S;
}

