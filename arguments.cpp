#include<iostream>
using namespace std;
int main(){
	//char name;
	int p,c,m,e,b,sum;
	float per;
	//cout<<"Enter your name: "<<endl;
	//cin>>name;
	cout<<"Physics marks: "<<endl;
	cin>>p;
	cout<<"chemistry marks: "<<endl;
	cin>>c;
	cout<<"maths marks: "<<endl;
	cin>>m;
	cout<<"english marks: "<<endl;
	cin>>e;
	cout<<"biology marks: "<<endl;
	cin>>b;
	sum=p+c+m+e+b;
	per=sum/500;
	cout<<per;
	return 0;
}
