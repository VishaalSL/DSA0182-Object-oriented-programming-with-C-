#include<iostream>
using namespace std;
int main(){
	char wd,lowercase,uppercase;
	cout<<"Enter a character: ";
	cin>>wd;
	lowercase=(wd == 'a' || wd == 'e' || wd == 'i' || wd == 'o' || wd == 'u');
	uppercase=(wd == 'A' || wd == 'E' || wd == 'I' || wd == 'O' || wd == 'U');
	if (lowercase ||uppercase){
		cout<<wd<<" is a vowel";
	}
	else{
		cout<<wd<<" is a consonent";
	}
	return 0;
}
