#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    cout<<"Enter C: ";
    cin>>c;
	if(a==b){
		cout<<"A is equal to B";
	}
	else if(a==c){
		cout<<"A is equal to C";
	}
	else{
		cout<<"They are not equal";
	}
	return 0;
  
}

