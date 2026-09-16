#include<iostream>
using namespace std;

class Example{                                         
    int Roll;
    string name;
    public:
    void getin();
    void Print();
        
};


void Example :: getin(){
            cout<<"Roll no: ";
            cin>>Roll;
            cout<<"Name: ";
            cin>>name;
        }
inline void Example ::  Print(){
            cout<<Roll<<' ';
            cout<<name;                                                                        
        }


int main(){
    Example E;
    E.getin();                                                     
    E.Print();
}

 
