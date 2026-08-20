#include "iostream"
using namespace std;


/*Sum*/

// namespace Start{
//     void display(){
//         cout<<"I am in DPF";
//     }
// }

// int main(){
//     Start::display();
// }


// namespace First{
//     void sum(){
//         int a,b;
//         cout<<"Enter the no.: ";
//         cin>>a>>b;
//         cout<<a+b;
//     }
// }

// namespace Second{
//     int sum(int, int);
//     int sum(int a, int b){
//         return a+b;
//     }
// }

// namespace Third{
//     void sum(int a, int b, double c){
//         double res= a+b+c;
//         cout<<res;
//     }
// }

// int main(){
//     First::sum();
//     int x,y;
//     double z;
//     cout<<"\nEnter the no. for 2nd: ";
//     cin>>x>>y;
//     cout<<Second::sum(x,y);
//     cout<<"\nEnter the no. for 3rd: ";
//     cin>>x>>y>>z;
//     Third::sum(x,y,z);

//     return 0;
// }



/*Variable*/

// namespace First{
//        int x=5; 
//         void display(){
//             cout<<"First\n";
//         }  
// }

// namespace Second{
//         double x=5.5; 
//         void display(){
//             cout<<"Second\n";
//         }  
// }

// void display(){
//     cout<<"main\n";
// }

// int main(){
//     string x="C++";
//     display();
//     cout<<x<<"\n";
//     First::display();
//     cout<<First::x<<"\n";
//     Second::display();
//     cout<<Second::x<<"\n";
//     return 0;
// }



/*Rename*/

// namespace asdfghjkl
// {
//   int a=10;  
// } 

// namespace l=asdfghjkl;

// int main(){
//     cout<<l::a;
// }



/*Multiple use of namespace*/

namespace A{
    int a=10;
}

namespace B{
    double a=5.05;
}

using namespace B;

int main(){
    
    cout<<a;
}