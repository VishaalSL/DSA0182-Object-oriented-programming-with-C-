#include <iostream>
using namespace std;
class Gr{
public:
	int total;
    Gr(int cam,int mte,int cam1,int iam,int ete) {
        total=cam+mte+cam1+iam+ete;
    }
    char grade() {
        if (total>=85)
            return 'A';
        else if(total>=80)
            return 'A-';
        else if(total>=70)
            return 'B';
        else if(total>=65)
            return 'B-';
        else if(total>=55)
            return 'C';
        else if(total>=33)
            return 'D';
        else
            return 'F';
    }
};
int main(){
    int cam,mte,cam1,iam,ete;
    cout<<"Enter CAM(out of 10): ";
    cin>>cam;
    cout<<"Enter MTE(out of 20): ";
    cin>>mte;
    cout<<"Enter CAM(out of 10): ";
    cin>>cam1;
    cout<<"Enter IAM(out of 10): ";
    cin>>iam;
    cout<<"Enter ETE(out of 50): ";
    cin>>ete;
    Gr grade(cam,mte,cam1,iam, ete);
    cout<<"Grade is: "<<grade.grade()<<endl;
    return 0;
}

