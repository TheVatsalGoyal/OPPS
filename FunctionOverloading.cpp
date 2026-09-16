#include<iostream>
using namespace std;

class Function{
    int a,b;
    double c;
   
    
    public:
    void sum();
    int sum(int, int);
    double sum(int,int, double);
    //void getdata(int, int);
};

// void Function:: getdata(int x,int y){
//     a=x;
//     b=y;
// }

void Function::sum(){
    cout<<"Enter: ";
    cin>>a>>b;
    cout<<a+b;
}


int Function::sum(int x, int y){
    a=x;
    b=y;
    return a+b;
}

double Function::sum(int x,int y, double z){
    a=x;
    b=y;
    c=z;
    double ans = a+b+c;
    return ans;
}

int main(){
    int n1,n2;
    double n3;
    Function O1;
    O1.sum();
    cout<<"\nEnter 2 no. : ";
    cin>>n1>>n2;
    cout<<O1.sum(n1,n2);
    cout<<"\nEnter 1 and 2 no. : ";
    cin>>n1>>n2>>n3;
    cout<<O1.sum(n1,n2,n3);
}