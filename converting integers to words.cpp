#include <iostream>
using namespace std;
string digitName(int digit);
string teenName(int number);
string tensName(int number);
string intName(int number);
int main(){
    int input;
    do{
    cout<<"Please enter a positive integer: ";
    cin>>input;
    cout<<"\n"<<intName(input)<<endl;
    cout<<"\n\n"<<endl;
    }
	while (input > 0);
    return 0;
}
string digitName(int digit){
    if (digit==1)return "One";
    if (digit==2)return "Two";
    if (digit==3)return "Three";
    if (digit==4)return "Four";
    if (digit==5)return "Five";
    if (digit==6)return "Six";
    if (digit==7)return "Seven";
    if (digit==8)return "Eight";
    if (digit==9)return "Nine";
    return "";
}
string teenName(int number){
    if (number==10)return "Ten";
    if (number==11)return "Eleven";
    if (number==12)return "Twelve";
    if (number==13)return "Thirteen";
    if (number==14)return "Fourteen";
    if (number==15)return "Fifteen";
    if (number==16)return "Sixteen";
    if (number==17)return "Seventeen";
    if (number==18)return "Eighteen";
    if (number==19)return "Nineteen";
    return "";
}
string tensName(int number){
    if (number>=90)return "Ninety";
    if (number>=80)return "Eighty";
    if (number>=70)return "Seventy";
    if (number>=60)return "Sixty";
    if (number>=50)return "Fifty";
    if (number>=40)return "Fourty";
    if (number>=30)return "Thirty";
    if (number>=20)return "Twenty";
    return "";}
string intName(int number){
    int part=number;
    string name;
    if (part>=20000){
        if (part%10000==0){
            name=tensName(part/1000)+" Thousand ";
            part=part%1000;
        }else{
            name=tensName(part/1000)+" ";
            part=part%10000;
        }
    }
    if (part>=10000){
        name=teenName(part/1000)+" Thousand ";
        part=part%1000;
    }
    if (part>=1000){
        name=digitName(part/1000)+" Thousand ";
        part=part%1000;
    }
    if (part>=100 ){
        name=name+digitName(part/100)+" Hundred";
        part=part%100;
    }
    if (part>=20){
        name=name+ " "+tensName(part);
        part=part%10;
    }else if(part>=10){
        name=name+" "+teenName(part);
        part=0;
    }
    if (part>0){
        name=name+" "+digitName(part);
    }
    return name;
}
