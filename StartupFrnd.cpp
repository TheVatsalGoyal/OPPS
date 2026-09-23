#include<iostream>
using namespace std;

class Startup{
    string Name;
    int Amt;
    public:
    void getdata(string, int);
    friend Startup Eligible(Startup, Startup, Startup);
    void display(Startup);
};

void Startup :: getdata(string N, int A){
    Name=N;
    Amt=A;
}

Startup Eligible(Startup R, Startup S, Startup T){
    Startup D;
    D.Amt=R.Amt+S.Amt+T.Amt;
    cout<<D.Amt<<'\n';
    if(D.Amt>=100000){
        cout<<"Eligible\n";
    }
    else{
        cout<<"Not Eligible\n";
    }
}

int main(){
    Startup R1,S1,T1;
    R1.getdata("Ram", 50000);
    S1.getdata("Shyam", 47000);
    T1.getdata("Amit", 3500);
    Eligible(R1,S1,T1);

}