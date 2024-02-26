#include <iostream>
using namespace std;
int countDigitOne(int n) {
    if (n <= 0)
        return 0;
    int count = 0;
    long long factor = 1;
    while (n / factor > 0) {
        int currentDigit = (n / factor) % 10;
        int higherDigits = n / (factor * 10);
        int lowerDigits = n % factor;
        if (currentDigit == 0)
            count += higherDigits * factor;
        else if (currentDigit == 1)
            count += higherDigits * factor + lowerDigits + 1;
        else
            count += (higherDigits + 1) * factor;
        factor *= 10;
    }
    return count;
}
int main() {
    int n;
    cout<<"Enter n:";
    cin>>n
    cout << "Number of digit 1 occurrences from 1 to " << n << ": " << countDigitOne(n) << endl;
    return 0;
}
