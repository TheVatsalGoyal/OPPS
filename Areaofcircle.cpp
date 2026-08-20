#include "iostream"
using namespace std;

class Area{
    double r;
    
    public:
        void radius(double);
        float area();
};

void Area::radius(double x){
    r=x;   
}

float Area::area(){
    float ar=r*r*3.14;
    return ar;
}

int main(){
    Area C;
    double radius;
    cout<<"Radius: ";
    cin>>radius;
    C.radius(radius);
    cout<<C.area();

}