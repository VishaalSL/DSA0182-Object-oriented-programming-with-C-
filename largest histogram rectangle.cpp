#include <iostream>
using namespace std;
int largestarea(int arr[],int n) {
  int maxArea=0;
  for (int i=0;i<n;i++) {
    int minHeight=INT_MAX;
    for (int j=i;j<n;j++) {
      minHeight=min(minHeight,arr[j]);
      maxArea=max(maxArea,minHeight*(j-i+1));
    }
  }
  return maxArea;
}
int main(){
	int size;
	cout<<"Enter the size of the array: ";
	cin>>size; 
    int numbers[size];
	for (int i = 0; i < size; i++) { 
        cout << "Enter a number: "; 
        cin >> numbers[i]; 
    } 
   cout<<"The largest rectangle in histogram is:"<<largestarea(numbers,size); 
  return 0;
}
