#include <iostream>
using namespace std;
float CtF(double C){
    return(C*9/5)+32;
}
int main(){
    double C;
    cout<<"Enter celsius: ";
    cin>>C;
    float F=CtF(C);
    cout<<"fahrenheit: "<<F<<endl;
    return 0;
}

