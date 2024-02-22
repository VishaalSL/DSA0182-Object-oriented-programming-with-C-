//46
#include<iostream>
using namespace std;
int main()
{
    int arr[50], i, elem, pos, n;
    cout<<"Enter the Size for Array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Element to insert: ";
    cin>>elem;
    cout<<"position of element to insert: ";
    cin>>pos;
    for(i=n; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[i] = elem;
    n++;
    cout<<"The New Array is:";
    for(i=0; i<n; i++)
        cout<<arr[i]<<",";
    cout<<endl;
    return 0;
}
