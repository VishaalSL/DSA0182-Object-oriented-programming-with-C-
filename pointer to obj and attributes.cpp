#include<iostream>
using namespace std;
class MyClass {
public:
    int attribute1;
    double attribute2;
    MyClass(int a, double b) : attribute1(a), attribute2(b) {}
    void displayAttributes(){
        cout<<"Attribute 1: "<<attribute1<<endl;
        cout<<"Attribute 2: "<<attribute2<<endl;
    }
};
int main(){
    int input1;
    double input2;
    cout<<"Enter value for Attribute 1: ";
    cin>>input1;
    cout<<"Enter value for Attribute 2: ";
    cin>>input2;
    MyClass obj(input1, input2);
    MyClass* ptr = &obj;
    cout<<"Displaying attributes using pointer:"<<endl;
    ptr->displayAttributes();
    return 0;
}

