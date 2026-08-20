#include<iostream>
using namespace std;

class Example{                                         // for outside the class  Return_type class_name :: function_name(parameter)
    int Roll;
    string name;
    public:
    void getin();
    void Print();
        
};


void Example :: getin(){
            cin>>Roll;
            cin>>name;
        }
void Example ::  Print(){
            cout<<Roll<<' ';
            cout<<name;                                                                        
        }


int main(){
    Example E;
    E.getin();                                                      // " . " is known as member access operator
    E.Print();
}

 

/*EXAMPLE*/

// int n=10;
// int main(){
//     int n=20;
//     cout<<n<<endl;
//     cout<<::n;
// }

