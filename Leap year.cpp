#include<iostream>
using namespace std;
int main(){
	int yr;
	cout<<"enter a number: ";
	cin>>yr;
	if(yr%4==0){
		cout<<"Leap year"<<endl;
	}
	else{
		cout<<"Not a Leap year"<<endl;
	}
	return 0;
}
