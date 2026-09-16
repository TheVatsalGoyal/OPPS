#include<iostream>
using namespace std;

void display(int x=10){
    cout<<x<<endl;
}


void greet(string name,int age= 18){
    cout<<"HELLO \t"<<name<<" \t:\t"<<age<<endl;
}

int main(){
    // greet();
    greet("Arvind");
    greet("Rahul",25);
    return 0;    
}