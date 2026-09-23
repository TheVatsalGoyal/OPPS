#include<iostream>
using namespace std;


/*Without friend*/
// class Example{
//     int a;
//     public:
//     void geta(int);
//     int Sum(Example,Example, Example);
// };


// void Example::geta(int x){
//     a=x;
// }

// int Example::Sum(Example A1, Example B1, Example S1){
//    S1.a = A1.a+B1.a;
//    return S1.a;
// }

// int main(){
//     Example A,B,S;
//     A.geta(10);
//     B.geta(20);
//     cout<<S.Sum(A,B,S);
// }


/*With Friend but different approach*/
// class Example{
//     int a;
//     public:
//     void geta(int);
//     friend int Sum(Example, Example, Example);
// };


// void Example::geta(int x){
//     a=x;
// }

// int Sum(Example A1, Example B1, Example S1){
//    S1.a = A1.a+B1.a;
//    return S1.a;
// }

// int main(){
//     Example A,B,S;
//     A.geta(10);
//     B.geta(20);
//     cout<<Sum(A,B,S);
// }


/*With Friend With correct approach*/
class Example{
    int a;
    public:
    void geta(int);
    friend Example Sum(Example, Example);
    void display(Example);
};

void Example::display(Example E){
    cout<<E.a;
}

void Example::geta(int x){
    a=x;
}

Example Sum(Example A1, Example B1){
    Example S1;
    S1.a=A1.a+B1.a;
   return S1;
}

int main(){
    Example A,B,S;
    A.geta(10);
    B.geta(20);
    S=Sum(A,B);
    S.display(S);
}