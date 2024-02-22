#include <iostream>
using namespace std;
int main() {
    int p, r,t,si;
    char customerType;
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter the time period (in years): ";
    cin >> t;
    cout << "Customer type (student[s]/ public[y]): ";
    cin >> customerType;
    if (customerType == 'S' || customerType == 's') {
        r=8;
    } else {
        r=10;
    }
    si=(p*r*t)/100;
    cout << "Simple Interest: "<<si<<endl;
    return 0;
}

