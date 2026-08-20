#include<iostream>
using namespace std;

// int main(){
//     int a,b;
//     cin>>a;
//     b=a++ + ++a;
//     cout<<a<<endl<<b;
// }

// int main(){
//     int a,b;
//     cin>>a;
//     b=a++ +a+ a++;
//     cout<<a<<endl<<b;
// }

int main(){
    int a,b;
    cin>>a;
    b=++a + ++a;
    cout<<a<<endl<<b;
    return 0;
}
