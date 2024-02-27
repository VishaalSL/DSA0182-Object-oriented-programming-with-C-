#include<iostream>
using namespace std;
class Rectangle {
public:
    double L,B;
    void inp(){
        cin>>L>>B;
    }
    void ar()const{
        cout<<"area of rectangle: "<<L*B<<endl;
    }
    void perimeter()const{
        cout<<"Perimeter of rectangle: "<<2*(L+B)<<endl;
    }
};
class Triangle{
public:
    double L,B,H;
    void inp(){
        cin>>L>>B>>H;
    }
    void ar()const {
        cout<<"Area of triangle: "<<0.5*L*B<<endl;
    }
    void perimeter()const{
        cout<<"Perimeter of triangle: "<<L+B+H<<endl;
    }
};
int main(){
    Rectangle r;
    cout<<"enter LB for rectangle: ";
    r.inp();
    r.ar();
    r.perimeter();
    Triangle t;
    cout<<"enter LBH for trianlge: ";
    t.inp();
    t.ar();
    t.perimeter();
    return 0;
}

