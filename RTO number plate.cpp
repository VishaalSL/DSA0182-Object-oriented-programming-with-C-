#include <iostream>
using namespace std;
class RegCost {
private:
    int lstdigit;
public:
    Regcost(int lstdigit) {
        this->lstdigit = lstdigit;
    }
    void calculateCost() {
        int cost = 5000;
        if (isSameDigits()) {
            cost += 5000;
        }
       
