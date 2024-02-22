#include<iostream>
using namespace std;
int main()
{
   int i,a[50],no,pos,size;
    cout<<"Enter array size: ";
    cin>>size;
        for(i=0; i<size; i++){
            cout<<"Enter arr Element: ";
                cin>>a[i];
        }
   cout<<"Enter position to Delete number: ";
  cin>>pos;
  if(pos<size){
  	--pos;
  	for(i=pos;i<=size;i++){
  		a[i]=a[i+1];
	  }
  }
  else{
  	cout<<"invalid position";
   }
   cout<<"\nNew Array is :";
  for(i=0;i<size-1;i++){
    cout<<""<<a[i]<<",";
  }
  return 0;
}
