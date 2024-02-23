#include <iostream>
using namespace std;
float area(float radius);
int main(){
   float radius;
   cout<<"Enter the radius of circle: ";
   cin>>radius;
   cout<<"Area of circle: "<<area(radius)<<endl;
   return 0;
}
float area(float radius){
   float area;
   area=3.14*radius*radius;
   return area;
}
