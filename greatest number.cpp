#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter the 1st number: ";
	cin>>a;
	cout<<"Enter the 2nd number: ";
	cin>>b;
	cout<<"Enter the 3rd number: ";
	cin>>c;
	if(a>b && a>c){
		cout<<a<<" is the greatest number";
	}
	else if(a<b && a>c){
		cout<<b<<" is the greatest number";
	}
	else{
		cout<<c<<" is the greatest number";
	}
	return 0;
}
