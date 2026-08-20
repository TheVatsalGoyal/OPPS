#include<iostream>
using namespace std;

int main(){
int N;
cin>>N;
int fibo=0;

int a=0,b=1;
for(int i=0;i<N;i++){
    cout<<a<<endl;
    fibo=a+b;
    a=b;
    b=fibo;
}
    
}