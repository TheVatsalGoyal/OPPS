#include<iostream>
using namespace std;
#include<cstdarg> //for variable length arguments


//#define n 10      // macro function and 10 is known as macro defination and expression and n is known as macro template

// #define square(n) n*n
// using  namespace std;

// int main(){
//     int r= 125/square(5);  // here it means as 125/5*5=25*5=125
//     cout<<r;
// }




//macro function don't return value it expands the expression


// void display(int size,...){                             // ... are known as ellipces
//         int n;
//         va_list args;
//         va_start(args,size);
//         for (int i=0;i<size;i++){
//             n=va_arg(args,int);
//             cout<<n<<"\v";
//         }
//         va_end(args);
// }

// int main(){
//     display(4,20,30,50,40);
// }


void display(int size,...){                             // ... are known as ellipces
        int n; int sum=0;
        va_list args;
        va_start(args,size);
        for (int i=0;i<size;i++){
            n=va_arg(args,int);
            sum+=n;
            
        }
        cout<<sum<<"\v";
        va_end(args);
}

int main(){
    display(4,20,30,50,40);
}